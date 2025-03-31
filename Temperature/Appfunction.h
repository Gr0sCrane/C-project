#ifndef APPFUNCTION_H
#define APPFUNCTION_H

#include <iostream>
#include <string>

// Déclarations des fonctions
void TitleScreen();
void AskTemp();
std::string WhatUnit(std::string &unity);
void ConvertTemp(float temp, std::string &FromUnit, std::string &ToUnit);

#endif

