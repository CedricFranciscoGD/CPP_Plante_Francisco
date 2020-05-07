#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <string>
#include <vector>
#include <iostream>
#include "Plante.h"

    void Plante::affiche(){
        std::cout << "Ceci est une plante non spécifique" << std::endl;
    }
    
    Plante::Plante(int nourir, int faireBoire, int tailler, std::string nom):
        _faim(5), _soif(10), _taille(-2), _name(nom) {}
    
    int Plante::getSoif(){
        return _soif;
    }
    
    string Plante::getName(){
        return _name;
    }
    
#endif