/**
 * @author      : Leopold Keller (leopold.keller@stud.h-da.de)
 * @file        : main
 * @created     : Monday May 30, 2022 15:21:16 CEST
 */
#include "semester.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    Semester MeinSemester =  Semester();
    char Eingabe, ge,zug;
    string vn, nn;
    int ma,Eingabe2;
    bool running = false;
    bool running2 = true;
    cout << "Willkommen beim Studentenverwaltungsservice (SVS)" << endl;
    while (running2) {
        cout << "Sie befinden sich in der Zugverwaltung!" << endl;
        cout << "(1) Neuen Zug hinzufügen " << endl;
        cout << "(2) Zug entfernen " << endl;
        cout << "(3) Zug zum Verwalten auswählen " << endl;
        cout << "(4) Namen aller verfuegbarer Zuege ausgeben " << endl;
        cout << "(5) Programm beenden " << endl;
        cin >> Eingabe2;
        switch (Eingabe2) {
        
        case 1: 
            cout << "Geben Sie einen Namen fuer den Zug ein(char): " << endl;
            cin >> zug;
            MeinSemester.add_Zug(zug);
            break;

        case 2:
            cout << "Geben Sie den Namen des zu entfernenden Zuges ein: " << endl;
            cin >> zug;
            MeinSemester.remove_Zug(zug);
            break;
        case 3:
            cout << "Geben Sie den Namen des zu verwaltenden Zuges ein: " << endl;
            cin >> zug;
            running = true;
            break;
        case 4:
            MeinSemester.printSemester();
            break;
        case 5:
            running2 = false;
            break;
            
        
        
        
        }

        while (running) {
            cout << "(i) immatrikulieren" << endl;
            cout << "(e) exmatrikulieren" << endl;
            cout << "(a) Anzeige aller eingeschriebenen Studierenden" << endl;
            cout << "(x) beenden" << endl;
            cin >> Eingabe;
            switch (Eingabe) {
            case 'i':
                cout << "Geben Sie einen Vornamen ein: " << endl;
                cin >> vn;
                cout << "Geben Sie einen Nachnamen ein: " << endl;
                cin >> nn;
                cout << "Geben Sie ein Geschlecht ein(m,w): " << endl;
                cin >> ge;
                try {

                    MeinSemester.getZug(zug).imm(vn, nn, ge);
                }
                catch (const std::out_of_range& e) {
                    cout
                        << "Die maximale Groesse des Testsystems ist erreicht!\n Bitte "
                        "exmatrikulieren Sie einen Studierenden bevor Sie einen neuen "
                        "immatrikulieren\n";
                    break;
                };
                break;

            case 'e':
                cout << "Geben Sie die Matrikelnummer des zu exmatrikulierenden "
                    "Studenten an: ";
                cin >> ma;
                cout << (MeinSemester.getZug(zug).exm(ma) ? "Student erfolgreich exmatrikuliert!"
                    : "Matrikelnummer wurde nicht gefunden!")
                    << endl;
                break;

            case 'a':
                MeinSemester.getZug(zug).printZug();
                break;
            case 'x':
                running = false;
                break;
            }
        }
    }
}