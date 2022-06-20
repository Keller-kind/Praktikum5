#include "semester.h"
Semester::Semester() {}
void Semester::add_Zug(char a)
{
	m_Zuege.push_back(Zug(a));
}

void Semester::remove_Zug(int a)
{
	m_Zuege.erase(m_Zuege.begin()+a);
}
Zug Semester::getZug(char a) {

	for (auto i : m_Zuege) {
		if (i.getName() == a) return i;
	
	}
	return 0;
}

void Semester::printSemester()
{
	for (auto i : m_Zuege) {
		cout << i.getName() << endl;
	}
}
