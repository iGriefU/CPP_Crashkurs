#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
    Person* p = new Person("James","Mond");
	p->setLastname("Bond");
	cout << "Die Person heisst " << p->getFirstname() << " " << p->getLastname() << "." << endl;
    delete p;
    return 0;
}