/**
 
 * @created		: 30/05/2022
 * @filename	: zug
 */
#ifndef ZUG_CPP
#define ZUG_CPP
#include "student.h"
#include "zug.h"

#include <iostream>
#include <vector>

using namespace std;
Zug::Zug(){}
void Zug::imm(string vorname, string nachname, char geschlecht) {
    static int count = 0;
    if (m_Studenten.size() == 5) {
    throw std::out_of_range("");
    return;
  }
  m_Studenten.push_back(Student(vorname, nachname, geschlecht, count++));
  
}

bool Zug::exm(int a) {
  for (int i = 0; i < m_Studenten.size(); i++) {
    if (m_Studenten[i].getMatrikelnummer() == a) {
      m_Studenten.erase(m_Studenten.begin() + i);
      return true;
    }
  }
  return false;
}

void Zug::printZug() {
  if (m_Studenten.size() == 0) {
    cout << "Es sind keine Studenten immatrikuliert!";
    return;
  }
  for (int i = 0; i < m_Studenten.size(); i++) {
    cout << "Student " << i + 1 << ": " << endl;
    cout << "Vorname: " << m_Studenten[i].getVorname() << endl;
    cout << "Nachname: " << m_Studenten[i].getNachname() << endl;
    cout << "Geschlecht: " << m_Studenten[i].getGeschlecht() << endl;
    cout << "Matrikelnummer: " << m_Studenten[i].getMatrikelnummer() << endl;
  }
}

#endif /* ZUG_CPP */