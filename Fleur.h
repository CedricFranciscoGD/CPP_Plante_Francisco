#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include <vector>
#include "Botaniste.h"
#include "Plante.h"

class Fleur : public Plante{
  protected:
    int _value;
    std::vector<Plante*> _eclore;
  public:
    void virtual affiche();
    Fleur(int valeur, std::vector<Plante*> nbJourEclosion);
};

#endif