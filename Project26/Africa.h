#include <iostream>
#include <vector>  
#include "Herbivore.h"
#include "Carnivore.h"
#include "Wildebeest.h"  
#include "Lion.h"        
using namespace std;
class Africa
{
	vector <Wildebeest*> wildebeests;
	vector <Lion*> lions;
	int amountW;
	int amountL;
public:
	void addH(Wildebeest* w);
	void addC(Lion* l);
	void Print();
};
