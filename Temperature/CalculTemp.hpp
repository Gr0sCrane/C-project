#include <iostream>

// Constantes
const float K = 273.15;
const float HOT_SPOT_C = 30;
const float HOT_SPOT_F = 86;
const float HOT_SPOT_K = 303.15;
const float COLD_SPOT_C = 0;
const float COLD_SPOT_F = 32;
const float COLD_SPOT_K = 273.15;

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
    if (ToUnit == "Celsius" && temp > HOT_SPOT_C){
        std::cout<<"Il fait chaud !"<<std::endl;
    } else if (ToUnit == "Fahrenheit" && temp > HOT_SPOT_F){
        std::cout<<"Il fait chaud !"<<std::endl;

    } else if (ToUnit == "Kelvin" && temp > HOT_SPOT_K){
        std::cout<<"Il fait chaud !"<<std::endl;
        
    } else if (ToUnit == "Celsius" && temp < COLD_SPOT_C) {
        std::cout<<"Il fait froid !"<<std::endl;
        
    } else if (ToUnit == "Fahrenheit" && temp < COLD_SPOT_F){
        std::cout<<"Il fait froid !"<<std::endl;
     
    } else if (ToUnit == "Kelvin" && temp < COLD_SPOT_K){
        std::cout<<"Il fait froid !"<<std::endl;
    }
}