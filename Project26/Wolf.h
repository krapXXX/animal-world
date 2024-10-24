#pragma once
#include<iostream>
#include "Bison.h"
using namespace std;
class Wolf
{
	int power;
public:
	Wolf(int p);
	void eatHerb(Bison* b);
	int getPower();
	void Print();
};
