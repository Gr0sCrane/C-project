#include <iostream>
#include "GameVar.hpp"

void DisplayGrid(int ln, int col,int posX,int posY,std::string symbol) {

    for (int i = 0; i < ln; i++) {
        // Ligne supérieure des cellules
        for (int j = 0; j < col; j++) {
            std::cout << "+--";
        }
        std::cout << "+" << std::endl;

        // Ligne du milieu avec des espaces
        for (int j = 0; j < col; j++) {
            if (i == posX && j == posY){
                std::cout<<"| "<< symbol;
            } else {
                std::cout << "|  ";
            }
        }
        std::cout << "|" << std::endl;
    }

    // Dernière ligne inférieure de la grille
    for (int j = 0; j < col; j++) {
        std::cout << "+--";
    }
    std::cout << "+" << std::endl;
}