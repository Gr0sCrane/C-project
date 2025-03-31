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