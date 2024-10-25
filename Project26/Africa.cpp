#include "Africa.h"


void Africa::addH(Wildebeest* w)
{
	wildebeests.push_back(w);
	amountW++;
}

void Africa::addC(Lion* l)
{
	lions.push_back(l);
	amountL++;
}

void Africa::Print()
{
	cout << "\t Africa: " << endl << "Amount of herbivore: " << amountW << endl;
	for (Wildebeest* wildebeest: wildebeests)
	{
		wildebeest->Print();
	}
	cout << endl << "Amount of carnivore: " << amountL << endl;
	for (Lion* lion: lions)
	{
		lion->Print();
	}
}
