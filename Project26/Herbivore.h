#pragma once
#include<iostream>
using namespace std;
class Herbivore
{
    virtual void eatGrass() = 0;
    virtual int getWeight() const = 0;
    virtual void setWeight() const = 0;
    virtual bool isAlive() const = 0;
    virtual void Print() const = 0;
};
