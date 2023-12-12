#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

template<typename Func, typename... Args>
std::string captureOutput(Func&& func, Args&&... args) {
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
    
    std::ostringstream strCout;
    std::cout.rdbuf(strCout.rdbuf());

    std::invoke(std::forward<Func>(func), std::forward<Args>(args)...);

    std::cout.rdbuf(oldCoutStreamBuf);

    std::string output = strCout.str();
    return output;
}

template<typename Func, typename... Args>
void redirectInput(const std::string& input, Func&& func, Args&&... args) {
    std::streambuf* oldCinStreamBuf = std::cin.rdbuf();

    std::istringstream testInput(input);
    std::cin.rdbuf(testInput.rdbuf());

    std::invoke(std::forward<Func>(func), std::forward<Args>(args)...);

    std::cin.rdbuf(oldCinStreamBuf);
}

template<typename Func, typename... Args>
auto redirectInputAndCaptureOutput(const std::string& input, std::string& output, Func&& func, Args&&... args) {
    std::streambuf* oldCinStreamBuf = std::cin.rdbuf();
    std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();

    std::istringstream testInput(input);
    std::cin.rdbuf(testInput.rdbuf());

    std::ostringstream strCout;
    std::cout.rdbuf(strCout.rdbuf());

    auto invokedOutput = std::invoke(std::forward<Func>(func), std::forward<Args>(args)...);

    std::cout.rdbuf(oldCoutStreamBuf);
    std::cin.rdbuf(oldCinStreamBuf);

    output = strCout.str();
    return invokedOutput;
}