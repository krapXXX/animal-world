#include "AnimalWorld.h"
#include "Africa.h"
#include "SouthAmerica.h"

void AnimalWorld::feedHerbivore()
{
    for (auto bison : bisons) 
    {
        bison->eatGrass();
        bison->Print();
    }
    for (auto wildebeest : wildebeests) 
    {
        wildebeest->eatGrass();
        wildebeest->Print();
    }
}
void AnimalWorld::feedCarnivore()
{
    for (auto wolf : wolves) 
    {
        for (auto bison : bisons) 
        {
            wolf->eatHerb(bison);
            wolf->Print();
        }
    }
    for (auto lion : lions)
    {
        for (auto wildebeest : wildebeests)
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
