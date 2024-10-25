#include "Lion.h"
#include "Wildebeest.h"

Lion::Lion(int p)
{
	power = p;
}

void Lion::eatHerb(Wildebeest* w)
{
	if (power > w->getWeight() && w->getWeight() > 0)
	{
		power += 10;
		w->setWeight(0);
	}
	else power -= 10;
}

int Lion::getPower()
{
	return power;
}

void Lion::Print()
{
	cout << "\t The Lion: " << endl << "power: " << power<<endl;
}
