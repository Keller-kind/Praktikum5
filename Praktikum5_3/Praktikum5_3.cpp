#include "Node.h"
#include "Schalter.h"
#include "thermometer.h"
#include "Lichtsensor.h"
#include <iostream>
using namespace std;
int main()
{
    Thermometer a = Thermometer();
    cout << a.getValue() << endl;
    Lichtsensor b = Lichtsensor();
    cout << b.getValue() << endl;
    Schalter c = Schalter();
    cout << c.getValue() << endl;
    c.setValue((int)true);
    cout << c.getValue() << endl;
}