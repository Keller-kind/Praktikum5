/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 30/05/2022
 * @filename	: zug
 */
#ifndef SEMESTER_H
#define SEMESTER_H
#include "zug.h"
#include <vector>
using namespace std;
class Semester {

private:
	vector<Zug> m_Zuege;


public:
	Semester();
	void add_Zug();
	void remove_Zug();
};





#endif /* SEMESTER_H */
