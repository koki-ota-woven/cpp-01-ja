@echo off

cmake -S autograder -B autograder\build -G "MinGW Makefiles"
cmake --build autograder\build
autograder\build\Tests.exe

@echo on
