#include "kugel.h"
#include <iostream>
using namespace std;
Kugel::Kugel() :Geschenk(), radius(0)
{
}

Kugel::Kugel(int rad) :Geschenk(), radius(rad)
{
	cout << "Kugel erstellt!" << endl;
}

float Kugel::einpacken()
{
	return (4 * 3.14159 *(radius*radius));
}

Kugel::~Kugel()
{
	cout << "Kugel zerstoert!" << endl;
}
