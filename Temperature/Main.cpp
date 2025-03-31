#include <iostream>
#include "AppFunction.h"
#include "CalculTemp.h"

int main(){
    bool Running = true;

    TitleScreen();

    while (Running){
        AskTemp();
        Running = false;
    }
    return 0;
}