#include "student.h"

Student::Student(const string& filename)
    : Person(), major(""), password(""), club(""), collegeName(""), gpa(0.0), studentID("")
{
    ifstream file(filename);
    if(file.is_open()){
        getline(file, firstName);
        getline(file, lastName);
        getline(file, email);
        getline(file, password);
        getline(file, major);
        file >> gpa;
        file.ignore();
        getline(file, club);
        getline(file, collegeName);
        getline(file, studentID);

        file.close();

    }
    else{
        cerr << "There has been an error getting information. Try again later" << endl;
    }
}


string Student::getPassword(){
    return password;
}

string Student::getMajor(){
    return major;
}

double Student::getGpa(){
    return gpa;
}

string Student::getClub(){
    return club;
}

string Student::getCollegeName(){
    return collegeName;
}

string Student::getStudentID(){
    return studentID;
}



