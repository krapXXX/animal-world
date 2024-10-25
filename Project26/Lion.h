#pragma once
#include<iostream>
#include "Wildebeest.h"
using namespace std;
class Lion
{
	int power;
public:
	Lion(int p);
	void eatHerb(Wildebeest* w);
	int getPower();
	void Print
	();
};
