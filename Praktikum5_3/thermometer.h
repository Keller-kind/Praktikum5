#ifndef THERMOMETER_H
#define THERMOMETER_H
#include "Node.h"


class Thermometer : Node {
private:
	int value;

public:
	Thermometer();
	int getValue();
	void setValue(int a);
	~Thermometer();
};




#endif // !THERMOMETER_H
