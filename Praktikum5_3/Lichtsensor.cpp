#include "Lichtsensor.h"
#include <random>
#include <iostream>
using namespace std;
Lichtsensor::Lichtsensor()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0,12000);
    value = dist(rng);
}

void Lichtsensor::setValue(int a)
{
    cout << "Diese Funktion istfuer Lichtsensoren nicht verfuegbar!";
}

int Lichtsensor::getValue()
{
    return value;
}

Lichtsensor::~Lichtsensor()
{
}
