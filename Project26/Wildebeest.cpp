#include "Wildebeest.h"

Wildebeest::Wildebeest(int w, bool l)
{
	weight = w;
	life = l;
}

void Wildebeest::eatGrass()
{
	weight += 10;
}

int Wildebeest::getWeight()
{
	return weight;
}

void Wildebeest::setWeight(int w)
{
	weight = w;
}

bool Wildebeest::isAlive()
{
	if (weight <= 0)
	{
		return false;
	}
	else return true;
}

void Wildebeest::Print()
{
	cout << "\t Wildbeest: " << endl << "weight: " << weight << endl << "state: ";
	if (isAlive() == true)
	{
		cout << "alive"<<endl;
	}
	else 
		cout << "dead" << endl;
}
