#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
Student::assignDetails(int stId, const char sName[]) {
  studentId=stId;
  strcpy(name,sName);
}

// Display StudentId and Name
Student::display() {
  cout<<"student name="<<name<<endl;
  cout<<"student ID ="<<studentId<<endl;
}
