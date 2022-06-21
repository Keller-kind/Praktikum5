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
Zug &Semester::getZug(char a) {

	for (int i = 0; i < m_Zuege.size(); i++) {
		if (m_Zuege[i].getName() == a) {
			return	m_Zuege[i];



		}
		throw("Zug existiert nicht");
	}
}

void Semester::printSemester(){
	for (auto i : m_Zuege) {
		cout << i.getName() << endl;
	}
}
