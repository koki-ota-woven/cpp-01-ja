#include <iostream>
#include <fstream>
#include <string>

void rename_main_function(const std::string& input_filepath, const std::string& output_filepath, bool empty = false) {
    std::filesystem::path dir = std::filesystem::path(output_filepath).parent_path();
    if (!std::filesystem::exists(dir)) {
        if (!std::filesystem::create_directories(dir)) {
            std::cerr << "Failed to create directory: " << dir << std::endl;
            return;
        }
    }
    
    std::ofstream output_file(output_filepath);
    if (!output_file.is_open()) {
        std::cerr << "Failed to open output file." << std::endl;
        return;
    }

    std::ifstream input_file(input_filepath);
    if (!input_file.is_open() || empty) {
        output_file << "int dummy_main() { return 1; }";
        output_file.close();
        return;
    }

    std::string content;
    std::string line;
    while (std::getline(input_file, line)) {
        content += line + '\n';
    }
    input_file.close();

    size_t pos = content.find("int main(");

    if (pos != std::string::npos) {
        content.replace(pos, 9, "int dummy_main(");
        output_file << content;
    } else {
        output_file << "int dummy_main() { return 1; }";
    }

    output_file.close();
}

int main(int argc, char** argv) {
    bool empty = argc > 3;
    rename_main_function(argv[1], argv[2], empty);
}