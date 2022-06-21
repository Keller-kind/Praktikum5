#include "geschenk.h"
class Paket : Geschenk {
private:
	int Hoehe;
	int Breite;
	int Tiefe;

public:
	Paket();
	Paket(int height, int width, int depth);
	float einpacken();
	~Paket();

};