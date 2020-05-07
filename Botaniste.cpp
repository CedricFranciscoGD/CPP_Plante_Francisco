#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include "Botaniste.h"
#include <iostream>

void Botaniste::affiche(){
        std::cout << "Cet homme est un e-botaniste" << std::endl;
    }
    
    Botaniste::Botaniste(int sommeil, int transaction, int collection):
        _fatigue(10), _porteFeuille(100), _nbrPlantes(5) {}
    
    int Botaniste::getSommeil(){
        return _fatigue;
    }
    
#endif