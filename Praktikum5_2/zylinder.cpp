#include "zylinder.h"
#include <iostream>
using namespace std;
Zylinder::Zylinder() :Geschenk(), Radius(0), Hoehe(0) {}

Zylinder::Zylinder(int rad, int height) :Geschenk(), Radius(rad), Hoehe(height) 
{
	cout << "Zylinder erstellt!" << endl;
}

float Zylinder::einpacken()
{
	float Flaeche = 0;
	Flaeche += 2 * 3.14159 * Radius * Hoehe;
	Flaeche += 2 * 3.14159 * (Radius * Radius);
	return Flaeche;
}

Zylinder::~Zylinder()
{
	cout << "Zylinder zerstoert!" << endl;
}
