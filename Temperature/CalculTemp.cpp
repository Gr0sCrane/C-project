#include <iostream>

const float K = 273.15;

float CelciusToKelvin(float tempC){
    return tempC + K;
}

float KelvinToCelcius(float tempK){
    return tempK - K;
}

float CelciusToFahrenheit(float tempC){
    return (tempC*9/5) + 32;
}

float FahrenheitToCelcius(float tempF){
    return (tempF - 32) * 5/9;
}

float KelvinToFahrenheit(float tempK){
    return (tempK - K) * 9/5 + 32;
}

float FahrenheitToKelvin(float tempF){
    return (tempF - 32 ) * 5/9 + K;
}

void isHotOrCold(float temp, std::string ToUnit){
    if (ToUnit == "Celsius" && temp > 30){
        std::cout<<"Il fait chaud !"<<std::endl;
    } else if (ToUnit == "Fahrenheit" && temp > 86){
        std::cout<<"Il fait chaud !"<<std::endl;

    } else if (ToUnit == "Kelvin" && temp > 303.15){
        std::cout<<"Il fait chaud !"<<std::endl;
        
    } else if (ToUnit == "Celsius" && temp < 0) {
        std::cout<<"Il fait froid !"<<std::endl;
        
    } else if (ToUnit == "Fahrenheit" && temp < 32){
        std::cout<<"Il fait froid !"<<std::endl;
     
    } else if (ToUnit == "Kelvin" && temp < 273.15){
        std::cout<<"Il fait froid !"<<std::endl;
}