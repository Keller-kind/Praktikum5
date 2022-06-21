#include "geschenk.h"
#include "zylinder.h"
#include "kugel.h"
#include "paket.h"
#include <iostream>

using namespace std;

int main() {
	Zylinder a = Zylinder(2,5);
	Paket b = Paket(1, 2, 3);
	Kugel c = Kugel(3);
	cout << a.einpacken() << endl;
	cout << b.einpacken() << endl;
	cout << c.einpacken() << endl;

}