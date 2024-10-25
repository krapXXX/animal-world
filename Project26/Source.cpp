#include <iostream>
#include"Africa.h"
#include"AnimalWorld.h"
#include"Bison.h"
#include"Carnivore.h"
#include"Continent.h"
#include"Herbivore.h"
#include"Lion.h"
#include"SouthAmerica.h"
#include"Wildebeest.h"
#include"Wolf.h"
using namespace std;

int main()
{ 
    Africa africa; 
    America america;
    AnimalWorld animalWorld;

    Wildebeest* wildebeest1 = new Wildebeest(150, true); 
    Wildebeest* wildebeest2 = new Wildebeest(160, true);
    Bison* bison1 = new Bison(200, true);
    Bison* bison2 = new Bison(220, true);

    Lion* lion1 = new Lion(180); 
    Lion* lion2 = new Lion(90);
    Wolf* wolf1 = new Wolf(270); 
    Wolf* wolf2 = new Wolf(75);

    africa.addH(wildebeest1);
    africa.addH(wildebeest2);
    africa.addC(lion1);
    africa.addC(lion2);
   
    america.addH(bison1);
    america.addH(bison2);
    america.addC(wolf1);
    america.addC(wolf2);

    africa.Print();
    america.Print();
    animalWorld.feedHerbivore();

    animalWorld.PrintAll();
}