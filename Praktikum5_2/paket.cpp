#include "paket.h"
#include <iostream>
using namespace std;

Paket::Paket() :Geschenk(), Hoehe(0), Breite(0), Tiefe(0)
{
}

Paket::Paket(int height, int width, int depth) :Geschenk(), Hoehe(height), Breite(width), Tiefe(depth)
{
	cout << "Paket erstellt!" << endl;
}

float Paket::einpacken()
{
float Flaeche=0;
Flaeche += Breite * Hoehe * 2;
Flaeche += Breite * Tiefe * 2;
Flaeche += Hoehe * Tiefe * 2;
return Flaeche;
}

Paket::~Paket()
{
	cout << "Paket zerstoert!" << endl;
}
