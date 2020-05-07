#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <string>
#include <vector>
#include <iostream>
#include "Botaniste.h"
#include "Fleur.h"


    void Fleur::affiche(){
        std::cout << "Ceci est une fleur" << std::endl;
    }
    
    Fleur::Fleur(int valeur, std::vector<Plante*> nbJourEclosion):
        _value(10), _eclore(3) {}
    
    int Fleur::getValue(){
        return _value;
    }
    
    int Fleur::nbJourEclosion(){
        return _eclosion;
    }
    
#endif