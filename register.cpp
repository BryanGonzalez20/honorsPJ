#include "register.h"


Register :: Register() : Person() , email (""), password("") {

    cout << "What is your first name? :" << firstName << endl;
    cout << "What is your last name? :" << lastName << endl;
    cout << "What is your email? :" << email << endl;
    cout << "What is your password? :" << firstName << endl;



}

void Register::setEmail(string email){
    this -> email = email;
}

void Register::setPassword(string password){
    this -> password = password;
}


string Register::getEmail(){
    return email;
}

string Register::getPassword(){
    return password;
}
