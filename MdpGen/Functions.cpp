#include <iostream>
#include <random>


//===============Constants and global variables=======================================

bool Running = true;

const char CharacterList[7] = {'&','#','%','$','*','?','!'};

const char LetterList[26] = {'A','B','C','D','E','F','G','H','I','J','K',
'L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

const char LetterList_min[26] = {'a','b','c','d','e','f','g','i','j','k',
'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

const int ListeCharlen = sizeof(CharacterList) / sizeof(CharacterList[0]);
const int LetterListlen = sizeof(LetterList) / sizeof(LetterList[0]);
const int LetterMinlen = sizeof(LetterList_min) / sizeof(LetterList_min[0]);

//=================================================================================

std::string GenerateMdp(int taille,short Maj,short Min,short Chfr,short ChrSp){

    std::string Password = " ";

    if (taille == 1){
        int max_size = taille;
    }

    while (Password.length() <= taille){
        if (Maj == 1){
        int idxrandM = rand() % LetterListlen;
        char elemrand = LetterList[idxrandM];
        Password += elemrand;
        }
        if (Min == 1){
        int idxrandm = rand() % LetterMinlen;
        char elemrand = LetterList_min[idxrandm];
        Password += elemrand;
        }
        if (Chfr == 1){
        char chiffre = '0' + (rand() % 10);
        Password += chiffre;
        }
        if (ChrSp == 1){
        int idxrandC = rand() % ListeCharlen;
        char elemrand = CharacterList[idxrandC];
        Password += elemrand;
        }
    }
    return Password;
}

void getInfo(){
    int taille;
    short Choice_maj;
    short Choice_min;
    short Choice_chffr;
    short Choice_sp_char;

    std::cout<<"Taille du mdp? (taille minimum: 5): "<<std::endl;
    std::cin>>taille;

    if (taille < 5){
        std::cout<<"La taille est trop petite"<<std::endl;
        Running = false;
    }

    std::cout<<"Avec majuscule? (1: Oui, 0: Non): "<<std::endl;
    std::cin>>Choice_maj;

    std::cout<<"Avec minuscule? (1: Oui, 0: Non): "<<std::endl;
    std::cin>>Choice_min;

    std::cout<<"Avec des chiffres? (1: Oui, 0: Non): "<<std::endl;
    std::cin>>Choice_chffr;

    std::cout<<"Avec Caractères speciaux ? (1: Oui, 0: Non): "<<std::endl;
    std::cin>>Choice_sp_char;

    if (Choice_chffr != 1 && Choice_chffr != 0 || Choice_maj != 1 && Choice_maj != 0 ||
        Choice_min != 1 && Choice_min != 0 || Choice_sp_char != 1 && Choice_sp_char != 0){
            std::cout<<"Erreur lors du choix, veuillez choisir 1 ou 0"<<std::endl;
            Running = false;
    }
    std::string Password = GenerateMdp(taille,Choice_maj,Choice_min,Choice_chffr,Choice_sp_char);
    std::cout<<"Votre mot de passe a été généré : "<<Password<<std::endl;

    Running = false;

}




