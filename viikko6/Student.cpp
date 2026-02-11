#include "Student.h"


Student::Student(string n, int a)
{
    name = n;
    age = a;
}

Student::~Student()
{

}

void Student::setAge(int newAge)
{
    age = newAge;
}

void Student::setName(const string &newName)
{
    name = newName;
}

string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::printStudentInfo()
{
    cout << "Name: " << name <<
     ", Age: " << age << endl;
}