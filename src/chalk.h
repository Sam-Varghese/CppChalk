#include <iostream>
#include <windows.h>
#include <string>

class Chalk
{
private:
    void SetTextColor(int colorCode, std::string Text)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorCode);
        std::cout << Text;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }

public:
    void blue(std::string Text)
    {
        SetTextColor(1, Text);
    }
    void green(std::string Text)
    {
        SetTextColor(2, Text);
    }
    void cyan(std::string Text)
    {
        SetTextColor(3, Text);
    }
    void red(std::string Text)
    {
        SetTextColor(4, Text);
    }
    void purple(std::string Text)
    {
        SetTextColor(5, Text);
    }
    void yellow(std::string Text)
    {
        SetTextColor(5, Text);
    }
    void white(std::string Text)
    {
        SetTextColor(7, Text);
    }
    void grey(std::string Text)
    {
        SetTextColor(8, Text);
    }
    void brightBlue(std::string Text)
    {
        SetTextColor(9, Text);
    }
    void brightGreen(std::string Text)
    {
        SetTextColor(10, Text);
    }
    void brightCyan(std::string Text)
    {
        SetTextColor(11, Text);
    }
    void brightRed(std::string Text)
    {
        SetTextColor(12, Text);
    }
    void magenta(std::string Text)
    {
        SetTextColor(13, Text);
    }
    void brightWhite(std::string Text)
    {
        SetTextColor(15, Text);
    }
};