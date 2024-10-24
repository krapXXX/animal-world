#include "Bison.h"

Bison::Bison(int w, bool l)
{
	weight = w;
	life = l;
}

void Bison::eatGrass()
{
	weight += 10;
}

int Bison::getWeight()
{
	return weight;
}

void Bison::setWeight(int w)
{
	weight = w;
}

bool Bison::isAlive()
{
	if (weight == 0)
	{
		return false;
	}
	else return true;
}

void Bison::Print()
{
	cout << "\t Bison: " << endl << "weight: " << weight << endl << "state: ";
	if (life == true)
	{
		cout << "alive" << endl;
	}
	else cout << "dead" << endl;
}
