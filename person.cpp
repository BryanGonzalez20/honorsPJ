#include "person.h"

/*Person::Person(const string& firstName, const string& lastName, const string& email){
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> email = email;

}*/

Person::Person(): firstName(""), lastName(""), email(""){

}


void Person::setFirstName(string firstName){
    this -> firstName = firstName;

}
void Person::setLastName(string lastName){
    this -> lastName = lastName;

}
void Person::setEmail(string email){
    this -> email = email;
}


string Person::getFirstName(){
    return firstName;

}

string Person::getLastName(){
    return lastName;

}

string Person::getEmail(){
    return email;

}



