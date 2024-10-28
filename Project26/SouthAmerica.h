#pragma once 
#include <iostream>
#include <vector>  
#include "Wolf.h"
#include "Bison.h"  
using namespace std;
class America
{
	vector <Wolf*> wolves;
	vector <Bison*> bisons;
	int amountW=0;
	int amountB=0;
public:
	void addC(Wolf* w);
	void addH(Bison* b);
	void Print();
};
