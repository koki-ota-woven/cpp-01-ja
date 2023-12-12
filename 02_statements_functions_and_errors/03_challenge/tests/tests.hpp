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