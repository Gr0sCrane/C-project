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