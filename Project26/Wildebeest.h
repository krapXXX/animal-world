#pragma once
#include<iostream>
using namespace std;
class Wildebeest
{
	int weight;
	bool life;
public: 
	Wildebeest(int w, bool l);
	void eatGrass();
	int getWeight();
	void setWeight(int w);
	bool isAlive();
	void Print();
};