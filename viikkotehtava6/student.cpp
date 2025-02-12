#include <string>
#include <iostream>
#include "student.h"
using namespace std;

Student::Student(string nimi, int ika) {
    cout << "student construktori!" << endl;
    Name = nimi;
    Age = ika;

}

void Student::setName(string nimi){
    Name = nimi;
}

void Student::setAge(int ika) {
    Age = ika;
}
string Student::getName() const {
    return Name;
}
int Student::getAge() const {
    return Age;
}

void Student::printStudentInfo() const {
    cout << Name << " " << Age << endl;
}
