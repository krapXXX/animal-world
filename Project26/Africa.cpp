#include "Africa.h"

void Africa::addH(Wildebeest* w)
{
	wildebeests.push_back(w);
}

void Africa::addC(Lion* l)
{
	lions.push_back(l);
}

void Africa::Print()
{
	cout << "\t Africa: " << endl << "Amount of herbivore: " << amountW << endl << "Amount of carnivore: " << amountL << endl;
}
