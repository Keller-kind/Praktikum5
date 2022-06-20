/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 30/05/2022
 * @filename	: zug
 */
#ifndef ZUG_H
#define ZUG_H
#include "student.h"
#include <vector>
using namespace std;
class Zug {

private:
	vector<Student> m_Studenten;
	char name;
	

public:
	Zug();
	Zug(char nameIn);
	void imm(string vorname, string nachname, char geschlecht);
	bool exm(int a);
	void printZug();
	void setName(char a);
	char getName();
};





#endif /* ZUG_H */
