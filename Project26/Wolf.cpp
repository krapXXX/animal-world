#include "Wolf.h"
#include "Bison.h"

Wolf::Wolf(int p)
{
	power = p;
}

void Wolf::eatHerb(Bison* b)
{
	if (power > b->getWeight())
	{
		power += 10;
		b->setWeight(0);
	}
	else power -= 10;
}

int Wolf::getPower()
{
	return power;
}

void Wolf::Print()
{
	cout << "\t The Wolf: " << endl << "power: " << power << endl;
}
