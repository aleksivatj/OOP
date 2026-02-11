#include <iostream>
#include <vector>
#include "Student.h"
#include <algorithm>

using namespace std;

int main() {
    
  int selection = 0;
  string studentName;
  int studentAge;
  string target;
  vector<Student> studentList;
  vector<Student>::iterator it = studentList.begin();

  do
    {
      cout << endl;
      cout << "Select" << endl;
      cout << "Add students = 0" << endl;
      cout << "Print all students = 1" << endl;
      cout << "Sort and print students according to Name = 2" << endl;
      cout << "Sort and print students according to Age = 3" << endl;
      cout << "Find and print student = 4" << endl;
      cin >> selection;

      switch(selection)
      {
        case 0:
            cout << "Choice 0: Add a student" << endl;
            cout << "Enter student name: "; cin >> studentName; cout << endl;
            cout << "Enter student age: "; cin >> studentAge; cout << endl;
            studentList.emplace_back(studentName, studentAge);
            cout << "Student added: " << studentName << ", Age: " << studentAge << endl;
          break;

        case 1:
            cout << "Choice 1: Print all students" << endl;
            for (auto &s : studentList) {
                cout << s.getName() << ", " << s.getAge() << endl;
            }
          break;

        case 2:
            cout << "Choice 2: Sort and print students according to Name" << endl;
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b) {
                return a.getName() < b.getName();
            });
            for (auto &s : studentList) {
                s.printStudentInfo();
            }
          break;

        case 3:
            cout << "Choice 3: Sort and print students according to Age" << endl;
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b) {
                return a.getAge() > b.getAge();
            });
            for (auto &s : studentList) {
                s.printStudentInfo();
            }
          break;

        case 4:
            cout << "Choice 4: Find and print student" << endl;
            cout << "Enter student to find: "; cin >> target; cout << endl;
            it = find_if(studentList.begin(), studentList.end(),[target](const Student &a){
                return a.getName() == target;
            });
            if (it != studentList.end()) {
                cout << "Student found: " << endl; it->printStudentInfo();
            } else {
                cout << "Student " << target << " not found." << endl;
            }
          break;

        default:
          cout << "Wrong selection, stopping..." << endl;
          break;
        }
      } while(selection < 5);

    return 0;
}