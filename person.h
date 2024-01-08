#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;


class Person
{
protected:
    string firstName;
    string lastName;




public:
    // Person(const string& firstName, const string& lastName, const string& email);
    Person();

    void setFirstName(string firstName);
    void setLastName(string lastName);


    string getFirstName();
    string getLastName();


};

#endif // PERSON_H
