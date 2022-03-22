#ifndef Lieu_CPP
#define Lieu_CPP

#include <string>
#include <vector>
#include <iostream>

#include "lieux.h"

using namespace std;

Lieu::Lieu() : _name(""), _difficulty (0), _description ("") {};

std::string Lieu::getName(){

    return _name;

}

std::string Lieu::getDescription(){

    return _description;

}

int Lieu::getDifficulty(){

    return _difficulty;

}



#endif
