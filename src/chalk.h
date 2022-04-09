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
    //* Working for basic colors, only text colors

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

    //* Working for blue background, and combinations of other text colors

    // To get black colored fonts, in blue colored background
    void bgBlueFgBlack(std::string Text)
    {
        SetTextColor(16, Text);
    }
    // To get white colored fonts with blue background
    void bgBlueFgWhite(std::string Text)
    {
        SetTextColor(22, Text);
    }
    // To get red colored font in blue background
    void BgBlueFgRed(std::string Text)
    {
        SetTextColor(20, Text);
    }
    // To get grey colored font in blue background
    void BgBlueFgGrey(std::string Text)
    {
        SetTextColor(24, Text);
    }
    // To get green colored font in blue background
    void BgBlueFgGreen(std::string Text)
    {
        SetTextColor(26, Text);
    }
    // To get cyan colored font in blue background
    void BgBlueFgCyan(std::string Text)
    {
        SetTextColor(27, Text);
    }
    // To get magenta colored font in blue background
    void BgBlueFgMagenta(std::string Text)
    {
        SetTextColor(28, Text);
    }

    //* Working for green background and combination of other text colors

    // To get black colored font in green background
    void bgGreenFgBlack(std::string Text)
    {
        SetTextColor(32, Text);
    }
    // To get blue colored text in green background
    void bgGreenFgBlue(std::string Text)
    {
        SetTextColor(33, Text);
    }
    // To get light colored text in green background
    void bgGreenFgLightBlue(std::string Text)
    {
        SetTextColor(35, Text);
    }
    // To get Red colored text in green background
    void bgGreenFgRed(std::string Text)
    {
        SetTextColor(36, Text);
    }
    // To get pink colored text in green background
    void bgGreenFgPink(std::string Text)
    {
        SetTextColor(45, Text);
    }
    // To get yellow colored text in green background
    void bgGreenFgYellow(std::string Text)
    {
        SetTextColor(46, Text);
    }


    void printLoop()
    {
        for (int i = 0; i < 300; i++)
        {
            // std::cout << "\nColor number: " << i << "\n";
            SetTextColor(i, "Hello world!\t");
        }
    }
};
