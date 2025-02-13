#include <string>
#include <iostream>
#include "student.h"
using namespace std;

Student::Student(string nimi, int ika) {
   
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
    cout <<"Student " << Name << " Age " << Age << endl;
}
