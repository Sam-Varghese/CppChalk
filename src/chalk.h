#include <iostream>
#include <windows.h>
#include <string>

class Chalk{
    public:
    void blue(std::string Text){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        std::cout << Text;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
    void green(std::string Text){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        std::cout << Text;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
};