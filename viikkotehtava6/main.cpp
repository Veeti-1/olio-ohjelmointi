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
            cout << "anna opiskelijan nimi: "<< endl;

            cin >> nimi;
            cout << "anna opiskelijan ika: " << endl;
            cin >> ika;
            studentList.push_back({ nimi, ika });

            break;
        case 1:
            for (auto& Student : studentList) {
                cout << Student.getName() << endl;
            }
      
            break;
            /*Tulosta StudentList vektorin kaikkien opiskelijoiden
             nimet.*/

        case 2:
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.getName() < b.getName();
            });
            for (const auto& Student : studentList) {
                Student.printStudentInfo();
            }
            break;
            /*Järjestä StudentList vektorin Student oliot nimen mukaan
          // algoritmikirjaston sort funktion avulla
          // ja tulosta printStudentInfo() funktion avulla järjestetyt
          // opiskelijat*/

        case 3:
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.getAge() < b.getAge();
                });
            for (const auto& Student : studentList) {
                Student.printStudentInfo();
            } 
            break;
            /*Järjestä StudentList vektorin Student oliot iän mukaan
           algoritmikirjaston sort funktion avulla
           ja tulosta printStudentInfo() funktion avulla järjestetyt
         opiskelijat */
        case 4: {
            cout << "anna opiskelijan nimi: ";
            cin >> nimi;

            auto it = find_if(studentList.begin(), studentList.end(), [&nimi](const Student& student) { return student.getName() == nimi; });
            if (it != studentList.end()) {
                cout << "opiskelija loytyi: " << endl;
                it->printStudentInfo();
                break;
            }
            cout << "opiskelijaa ei loytynyt!" << endl;
            break;
            /*Kysy käyttäjältä opiskelijan nimi
            Etsi studentListan opiskelijoista algoritmikirjaston
            find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
           */
        }

        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    }
    return 0;
}


