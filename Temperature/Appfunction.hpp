#include <iostream>
#include "CalculTemp.hpp"

bool Running = true;

void TitleScreen(){
    std::cout<<"-------------------"<<std::endl;
    std::cout<<"Welcome"<<std::endl;
    std::cout<<"-------------------"<<std::endl;
}

std::string WhatUnit(std::string &unity) {
    while (unity != "C" && unity != "F" && unity != "K") {
        std::cout << "Unité invalide ! Veuillez entrer C, F ou K : ";
        std::cin >> unity;
    }

    if (unity == "C") return "Celsius";
    if (unity == "F") return "Fahrenheit";
    if (unity == "K") return "Kelvin";

    return "";
}

float ConvertTemp(float temp,std::string &FromUnit,std::string &ToUnit){
    if (FromUnit == ToUnit){
        std::cout<<"la température est deja en cette unité"<<std::endl;
    }
    else if (FromUnit == "Celsius" && ToUnit == "Fahrenheit"){
        std::cout<<"il fait : "<<CelciusToFahrenheit(temp)<<" °F"<<std::endl;
        return CelciusToFahrenheit(temp);
    }
    else if (FromUnit == "Fahrenheit" && ToUnit == "Celsius"){
        std::cout<<"il fait : "<<FahrenheitToCelcius(temp)<<" °C"<<std::endl;
        return FahrenheitToCelcius(temp);
    }
    else if (FromUnit == "Celsius" && ToUnit == "Kelvin"){
       std::cout<<"il fait : "<<CelciusToKelvin(temp)<<" °K"<<std::endl;
       return CelciusToKelvin(temp);
    }
    else if (FromUnit == "Kelvin" && ToUnit == "Celsius"){
       std::cout<<"il fait : "<<KelvinToCelcius(temp)<<" °C"<<std::endl;
       return KelvinToCelcius(temp);
    }
    else if (FromUnit == "Fahrenheit" && ToUnit == "Kelvin"){
       std::cout<<"il fait : "<<FahrenheitToKelvin(temp)<<" °K"<<std::endl;
       return FahrenheitToKelvin(temp);
    }
    else if (FromUnit == "Kelvin" && ToUnit == "Fahrenheit"){
        std::cout<<"il fait : "<<KelvinToFahrenheit(temp)<<" °F"<<std::endl;
        return KelvinToFahrenheit(temp);
    } else {
        std::cout<<"Erreur"<<std::endl;
        return 0;
    }
}

void AskTemp(){

    float temp;
    std::string FromUnit;
    std::string ToUnit;
    std::string choice;

    std::cout<<"Entrez la température: "<<std::endl;
    std::cin>>temp;

    std::cout<<"En quel unité est elle? (C,K,F): "<<std::endl;
    std::cin>>FromUnit;
    FromUnit = WhatUnit(FromUnit);

    std::cout<<"En quel unité veut tu la convertir?: "<<std::endl;
    std::cin>>ToUnit;
    ToUnit = WhatUnit(ToUnit);
    
    temp = ConvertTemp(temp,FromUnit,ToUnit);
    isHotOrCold(temp,ToUnit);

    std::cout<<"Quitter ? (Y/N)"<<std::endl;
    std::cin>>choice;

    if (choice == "Y" || choice == "y"){
        std::cout<<"Goodbye"<<std::endl;
        Running = false;
    }
}