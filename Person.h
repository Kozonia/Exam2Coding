#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
private:
	string firstName;
	string lastName;
	string dateOB;
public:
	Person();
	Person(string first, string last, string dob);
	string getFirstName() const;
	string getLastName() const;
	string getDateOfBirth() const;
	Person& operator=(const Person& right);
};
#endif

