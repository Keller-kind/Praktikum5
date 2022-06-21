#ifndef GESCHENK_H
#define GESCHENK_H


class Geschenk {
public:
	Geschenk();
	virtual float einpacken() = 0;
	virtual ~Geschenk()=default;


};
#endif // GESCHENK_H