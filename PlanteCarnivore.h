#ifndef PLANTECARNIVORE_H
#define PLANTECARNIVORE_H

#include <string>
#include "Botaniste.h"
#include "Plante.h"

class PlanteCarnivore : public Plante{
  protected:
    int _faim;
    int _soif;
    int _taille;
    std::vector<PlanteCarnivore*> _digestion;
    std::vector<PlanteCarnivore*> _attente;
  public:
    void virtual affiche();
    PlanteCarnivore(int manger, int arroser, int tailler, std::vector<PlanteCarnivore*> digéré, std::vector<PlanteCarnivore*> patiente);
    void inspecter(int digéré, int patiente);
};

#endif