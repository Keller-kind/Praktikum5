#ifndef ZYLINDER_H
#define ZYLINDER_H
#include "geschenk.h"
using namespace std;

class Zylinder : public Geschenk {
private:
	int Radius;
	int Hoehe;

public:
	Zylinder();
	Zylinder(int rad, int height);
	float einpacken();
	~Zylinder();
};
#endif