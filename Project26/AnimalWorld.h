#pragma once
#include<iostream>
#include<vector>
#include "Lion.h"  
#include "Bison.h"  
#include "Wildebeest.h"  
#include "Wolf.h"  
#include "Africa.h"  
#include "SouthAmerica.h"  

class AnimalWorld
{
	vector <Wolf*> wolves;
	vector <Bison*> bisons;
	vector <Wildebeest*> wildebeests;
	vector <Lion*> lions;
public:
	void feedHerbivore();
	void feedCarnivore();
	void PrintAll(Africa& africa, America& america);
};
