#include "SouthAmerica.h"

void America::addC(Wolf* w)
{
	wolves.push_back(w);
	amountW++;
}

void America::addH(Bison* b)
{
	bisons.push_back(b);
	amountB++;
}

void America::Print()
{
	cout << "\t SouthAmerica: " << endl << "Amount of herbivore: " << amountB << endl;
	for (Bison* bison :bisons)
	{
		bison->Print();
	}
	cout << endl << "Amount of carnivore: " << amountW << endl;
	for (Wolf* wolf :wolves)
	{
		wolf->Print();
	}
}
