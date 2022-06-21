#include "thermometer.h"
#include <random>
#include <iostream>
using namespace std;
Thermometer::Thermometer() :Node() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, 40);
    value = dist(rng)-20;
}
int Thermometer::getValue()
{
    return value;
}

void Thermometer::setValue(int a)
{
    cout << "Diese Funktion ist fuer Thermometer nicht verfuegbar!" << endl;
}

Thermometer::~Thermometer()
{
}
