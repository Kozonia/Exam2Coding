#include "Person.h"


Person::Person()
{
	firstName = "John";
	lastName = "Doe";
	dateOB = "1/1/2000";
}

Person::Person(string first, string last, string dob)
{
	firstName = first;
	lastName = last;
	dateOB = dob;
}

string Person::getFirstName() const
{
	return firstName;
}

string Person::getLastName() const
{
	return lastName;
}

string Person::getDateOfBirth() const
{
	return dateOB;
}

Person& Person::operator=(const Person& right)
{
	if (this != &right)
	{
		this->firstName = right.firstName;
		this->lastName = right.lastName;
		this->dateOB = right.dateOB;
		return *this;
	}
}
