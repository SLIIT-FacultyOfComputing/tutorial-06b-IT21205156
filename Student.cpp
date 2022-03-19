#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stId, const char sName[]) {
  studentId=stId;
  strcpy(name,sName);
}

// Display StudentId and Name
void Student::display() {
  cout<<"student name="<<name<<endl;
  cout<<"student ID ="<<studentId<<endl;
}
