#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;


class Student
{
public:
    Student(string n, int a);
    ~Student();
    void setAge(int newAge);
    void setName(const string &newName);
    string getName() const;
    int getAge() const;
    void printStudentInfo();


private:
    string name;
    int age;

};

#endif