#ifndef REGISTER_H
#define REGISTER_H
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class Register : public Person
{
private:

    string email;
    string password;


public:
    Register();

    void setEmail(string email);
    void setPassword(string password);

    string getEmail();
    string getPassword();

};

#endif // REGISTER_H
