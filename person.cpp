#include "person.h"

/*Person::Person(const string& firstName, const string& lastName, const string& email){
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> email = email;

}*/

Person::Person(): firstName(""), lastName(""){

}


void Person::setFirstName(string firstName){
    this -> firstName = firstName;

}
void Person::setLastName(string lastName){
    this -> lastName = lastName;

}



string Person::getFirstName(){
    return firstName;

}

string Person::getLastName(){
    return lastName;

}




