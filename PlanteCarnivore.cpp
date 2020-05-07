#ifndef PLANTECARNIVORE_CPP
#define PLANTECARNIVORE_CPP

#include <string>
#include "Botaniste.h"
#include "PlanteCarnivore.h"
#include <iostream>

    void PlanteCarnivore::inspecter(){
        std::cout << PlanteCarnivore << " a " << _faim << " de faim, et est en attente depuis " << _attente << ".";
        _faim[]->affiche();
        _attente[]->affiche();
    }
    
    PlanteCarnivore::PlanteCarnivorePlanteCarnivore(int manger, int arroser, int tailler, std::vector<PlanteCarnivore*> digéré, std::vector<PlanteCarnivore*> patiente):
    _faim(15), _soif(5), _taille(10), _attente(10), _digéré(0) {}
    
    
#endif