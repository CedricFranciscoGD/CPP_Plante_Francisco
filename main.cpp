/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include "Botaniste.h"
#include "Plante.h"
#include "Fleur.h"
#include "PlanteCarnivore.h"
#include <vector>

using namespace std;

int main()
{
    Botaniste = new Botaniste("L'e-botaniste possède une fatigue de" 10,"/100. Il a un portefeuille de", 100,"pieces et il possède ", 5, "plante");
    Botaniste->affiche();
    
    Fleur * Plante = new Fleur("La fleur possède une valeur de ",10, "et reste eclos ",3, "jours à la valeur de",30, "puis sa valeur descend a ", 1, "lorsqu'elle fane");
    Fleur->inspecter();
    
    PlanteCarnivore * Plante = new PlanteCarnivore("La plante carnivore a une faim de ",15, "une soif de ",5, "et une taille de",10, "la derniere mouche mangé était il y a ",vector<PlanteCarnivore*> _digestion, "elle est en attente de ", vector<PlanteCarnivore*> patiente, ".");
    PlanteCarnivore->inspecter();

    return 0;
}
