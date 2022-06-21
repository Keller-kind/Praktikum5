#include "geschenk.h"
using namespace std;
class Kugel : public Geschenk {
private:
	int radius;
public:
	Kugel();
	Kugel(int rad);
	float einpacken();
	~Kugel();
};