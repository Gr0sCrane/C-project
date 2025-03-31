#include <iostream>
#include "AppFunction.h"

int main(){
    bool Running = true;

    TitleScreen();

    while (Running){
        AskTemp();
        Running = false;
    }
    return 0;
}

//TODO faire une fonction bool isHot() et isCold() qui verif la temp convertie