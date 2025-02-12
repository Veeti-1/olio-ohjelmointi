#include <string>
#include <iostream>
using namespace std;
#ifndef STUDENTS_H
#define STUDENTS_H
class Student {
public:
    Student(string nimi, int ika);
    void setAge(int ika);
    void setName(string nimi);
    string getName() const ;
    int getAge() const;
    void printStudentInfo() const;
private:
    string Name;
    int Age;
};

#endif // STUDENTS_H
