#include <iostream>
#include "AppFunction.cpp"

int main(){
    bool Running = true;

    while (Running){
        AskTemp();
        Running = false;
    }
    return 0;
}

//TODO faire une fonction bool isHot() et isCold() qui verif la temp convertie