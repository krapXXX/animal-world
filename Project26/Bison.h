#pragma once
#include<iostream>
using namespace std;
class Bison
{
	int weight;
	bool life;
public:
	Bison(int w, bool l);
	void eatGrass();
	int getWeight();
	void setWeight(int w);
	bool isAlive();
	void Print();
};
