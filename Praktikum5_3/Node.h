#ifndef NODE_H
#define NODE_H
class Node {
public:
	virtual void setValue(int a) = 0;
	virtual int getValue() = 0;
	Node();
	~Node() = default;
};





#endif // NODE_H
