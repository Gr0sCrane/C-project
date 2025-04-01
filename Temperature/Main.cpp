#include <iostream>
#include "AppFunction.hpp"

int main()
{
    // Title screen
    TitleScreen();

    // App loop
    while (Running){
        AskTemp();
    }
    return 0;
}