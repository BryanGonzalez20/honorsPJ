#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Student:public Person{

private:
    string password;
    string major;
    double gpa;
    string club;
    string collegeName;
    string studentID;

public:
    // Constructor
    Student();
    // Getters
    string getPassword();
    string getMajor();
    double getGpa();
    string getClub();
    string getCollegeName();
    string getStudentID();


};

#endif // STUDENT_H
