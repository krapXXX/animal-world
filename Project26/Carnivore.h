#pragma once
#include<iostream>
#include "Herbivore.h"
using namespace std;

class Carnivore
{
    virtual void eat(Herbivore* herbivore) = 0;
    virtual int getPower() const = 0;
    virtual void Print() const = 0;
};
