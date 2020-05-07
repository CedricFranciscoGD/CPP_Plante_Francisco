#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>

class Botaniste{
  protected:
    int _fatigue;
    int _porteFeuille;
    int _nbrPlantes;
  public:
    void virtual affiche();
    Botaniste(int sommeil, int transaction, int collection);
    int getCollection();
};


#endif