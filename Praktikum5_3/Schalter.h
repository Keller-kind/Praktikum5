#include "Node.h"
enum Zustand { AUS, AN };
class Schalter :
    public Node
{
private:
    Zustand value;

public:
    Schalter();
    int getValue();
    void setValue(int a);
    ~Schalter();
};

