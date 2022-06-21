#include "Schalter.h"

Schalter::Schalter()
{
	value = Zustand::AUS;
}

int Schalter::getValue()
{
	return value;
}

void Schalter::setValue(int a)
{
	value = (Zustand) a;
}

Schalter::~Schalter()
{
}
