#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        Person(string firstname, string lastname){
            this->firstname=firstname;
            this-> lastname= lastname;
        }
        ~Person(){
            if(this->firstname!="") delete &(this->firstname);
            if(this-> lastname!="") delete &(this-> lastname);
            cout << "RIP Person" << endl;
        }
        string& getFirstname(){
            return this->firstname;
        }
        string& getLastname(){
            return this-> lastname;
        }
        void setFirstname(string name){
            this->firstname = name;
        }
        void setLastname( string name){
            this-> lastname = name;
        }
    private:
        string firstname;
	    string  lastname;
};