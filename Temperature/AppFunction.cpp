#include <iostream>
#include "CalculTemp.cpp"


void TitleScreen(){
    std::cout<<"-------------------"<<std::endl;
    std::cout<<"Bienvenue"<<std::endl;
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

void ConvertTemp(float temp,std::string &FromUnit,std::string &ToUnit){
    if (FromUnit == ToUnit){
        std::cout<<"la température est deja en cette unité"<<std::endl;
    }
    else if (FromUnit == "Celsius" && ToUnit == "Fahrenheit"){
        std::cout<<CelciusToFahrenheit(temp)<<std::endl;
    }
    else if (FromUnit == "Fahrenheit" && ToUnit == "Celsius"){
        std::cout<<FahrenheitToCelcius(temp)<<std::endl;
    }
    else if (FromUnit == "Celsius" && ToUnit == "Kelvin"){
       std::cout<<CelciusToKelvin(temp)<<std::endl;
    }
    else if (FromUnit == "Kelvin" && ToUnit == "Celsius"){
       std::cout<<KelvinToCelcius(temp)<<std::endl;
    }
    else if (FromUnit == "Fahrenheit" && ToUnit == "Kelvin"){
       std::cout<<FahrenheitToKelvin(temp)<<std::endl;
    }
    else if (FromUnit == "Kelvin" && ToUnit == "Fahrenheit"){
        std::cout<<KelvinToFahrenheit(temp)<<std::endl;
    } else {
        std::cout<<"Erreur"<<std::endl;
    }
}

void AskTemp(){

    float temp;
    std::string FromUnit;
    std::string ToUnit;

    std::cout<<"Entrez la température: "<<std::endl;
    std::cin>>temp;

    std::cout<<"En quel unité est elle? (C,K,F): "<<std::endl;
    std::cin>>FromUnit;
    FromUnit = WhatUnit(FromUnit);

    std::cout<<"En quel unité veut tu la convertir?: "<<std::endl;
    std::cin>>ToUnit;
    ToUnit = WhatUnit(ToUnit);
    
    ConvertTemp(temp,FromUnit,ToUnit);
}