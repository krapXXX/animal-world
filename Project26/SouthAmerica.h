#include <iostream>
#include <vector>  
#include "Herbivore.h"
#include "Wolf.h"
#include "Bison.h"  
#include "Lion.h"        
using namespace std;
class America
{
	vector <Wolf*> wolves;
	vector <Bison*> bisons;
	int amountW;
	int amountB;
public:
	void addH(Wolf* w);
	void addC(Bison* b);
	void Print();
};
