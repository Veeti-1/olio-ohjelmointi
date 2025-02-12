#include <iostream>
#include <vector>
#include "student.h"
#include "algorithm"
using namespace std;
int main()
{
    int selection = 0;
    vector<Student>studentList;
    string nimi;
    int ika;
    while (selection < 5){
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;



        switch (selection)
        {
        case 0:
            cout << "anna opiskelijan nimi ja ika: " << endl;

            cin >> nimi;
            cin >> ika;
            studentList.push_back({ nimi, ika });

            break;
        case 1:
            for (auto& Student : studentList) {
                cout << Student.getName() << endl;
            }
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            break;

        case 2:
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.getName() < b.getName();
            });
            for (const auto& Student : studentList) {
                Student.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;

        case 3:
            cout << " ";
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        case 4:
            cout << " ";
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            break;
        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }



    }
    return 0;
}


