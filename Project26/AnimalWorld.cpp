#include "AnimalWorld.h"
#include "Africa.h"
#include "SouthAmerica.h"

void AnimalWorld::feedHerbivore()
{
    for (Bison* bison : bisons) 
    {
        bison->eatGrass();
        bison->Print();
    }
    for (Wildebeest* wildebeest : wildebeests)
    {
        wildebeest->eatGrass();
        wildebeest->Print();
    }
}
void AnimalWorld::feedCarnivore()
{
    for (Wolf* wolf : wolves) 
    {
        for (Bison* bison : bisons) 
        {
            wolf->eatHerb(bison);
            wolf->Print();
        }
    }
    for (Lion* lion : lions)
    {
        for (Wildebeest* wildebeest : wildebeests)
        {
            lion->eatHerb(wildebeest);
            lion->Print();
        }
    }
}

void AnimalWorld::PrintAll()
{
    Africa africa;
    America america;
    cout << "\t \t Animal world "<<endl;
    africa.Print();
    america.Print();
}
