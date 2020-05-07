#ifndef PLANTE_H
#define PLANTE_H

#include <string>
#include <vector>
#include "Plante.h"

class Plante{
  protected:
    int _faim;
    int _soif;
    int _taille;
    std::string _name;
  public:
    void virtual affiche();
    Plante(int nourir, int faireBoire, int tailler, std::string nom);
    int getSoif();
    std::string getName();
};

#endif