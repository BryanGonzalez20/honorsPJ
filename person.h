#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;


class Person
{
protected:
    string firstName;
    string lastName;
    string email;



public:
    // Person(const string& firstName, const string& lastName, const string& email);
    Person();

    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);

    string getFirstName();
    string getLastName();
    string getEmail();

};

#endif // PERSON_H
