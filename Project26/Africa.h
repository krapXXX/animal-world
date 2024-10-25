#include <iostream>
#include <vector>  
#include "Wildebeest.h"  
#include "Lion.h"        
using namespace std;
class Africa
{
	vector <Wildebeest*> wildebeests;
	vector <Lion*> lions;
	int amountW=0;
	int amountL=0;
public:
	void addH(Wildebeest* w);
	void addC(Lion* l);
	void Print();
};
