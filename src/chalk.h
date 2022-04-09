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
    // To get blue colored texts during cout
    void blue(std::string Text)
    {
        SetTextColor(1, Text);
    }
    // To get green colored texts during cout
    void green(std::string Text)
    {
        SetTextColor(2, Text);
    }
    // To get cyan colored texts during cout
    void cyan(std::string Text)
    {
        SetTextColor(3, Text);
    }
    // To get red colored texts during cout
    void red(std::string Text)
    {
        SetTextColor(4, Text);
    }
    // To get purple colored texts during cout
    void purple(std::string Text)
    {
        SetTextColor(5, Text);
    }
    // To get yellow colored texts during cout
    void yellow(std::string Text)
    {
        SetTextColor(5, Text);
    }
    // To get white colored texts during cout
    void white(std::string Text)
    {
        SetTextColor(7, Text);
    }
    // To get grey colored texts during cout
    void grey(std::string Text)
    {
        SetTextColor(8, Text);
    }
    // To get brightBlue colored texts during cout
    void brightBlue(std::string Text)
    {
        SetTextColor(9, Text);
    }
    // To get brightGreen colored texts during cout
    void brightGreen(std::string Text)
    {
        SetTextColor(10, Text);
    }
    // To get brightCyan colored texts during cout
    void brightCyan(std::string Text)
    {
        SetTextColor(11, Text);
    }
    // To get brightRed colored texts during cout
    void brightRed(std::string Text)
    {
        SetTextColor(12, Text);
    }
    // To get magenta colored texts during cout
    void magenta(std::string Text)
    {
        SetTextColor(13, Text);
    }
    // To get brightWhite colored texts during cout
    void brightWhite(std::string Text)
    {
        SetTextColor(15, Text);
    }
    void bgBlueFgBlack(){
        SetTextColor(16, Text);
    }
    void bgBlueFgWhite(){
        SetTextColor(17, Text);
    }
    void BgBlueFgRed(){
        SetTextColor(52, Text);
    }
    void bgGreenFgBlack(){
        SetTextColor(32, Text);
    }
    void bgGreenFgWhite(){
        SetTextColor(34, Text);
    }
    void bgGreenFgRed(){
        SetTextColor(36, Text);
    }
    void printLoop()
    {
        for (int i = 0; i < 300; i++)
        {
            std::cout << "\nColor number: " << i << "\n";
            SetTextColor(i, "Sam is good\n");
        }
    }
};
