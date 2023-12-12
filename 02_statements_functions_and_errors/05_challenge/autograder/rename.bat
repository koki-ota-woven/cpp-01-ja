@echo off
setlocal

set empty=

g++ -std=c++17 -o autograder\main main.cpp >nul 2>&1
if errorlevel 1 (
    set empty=empty
)

g++ -std=c++17 -o autograder\rename_main autograder\rename_main.cpp

autograder\rename_main main.cpp autograder\gen\dummy_main.cpp %empty%

endlocal
