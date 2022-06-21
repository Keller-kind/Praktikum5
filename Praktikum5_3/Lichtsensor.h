#pragma once
#include "Node.h"

class Lichtsensor :
    public Node
{

private:
    int value;

public:
    Lichtsensor();
    void setValue(int a);
    int getValue();
    ~Lichtsensor();
};

