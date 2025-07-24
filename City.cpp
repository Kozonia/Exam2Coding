#include "City.h"


City::City()
{
	name = " ";
	latitude = 0;
	longitude = 0;
}

City::City(string name, double lat, double lon)
{
	this->name = name;
	latitude = lat;
	longitude = lon;
}

void City::setName(string name)
{
	this->name = name;
}

string City::getName()
{
	return name;
}

double City::getLat()
{
	return latitude;
}

double City::getLong()
{
	return longitude;
}

City& City::operator=(const City& right)
{
	if (this != &right)
	{
		this->name = right.name;
		this->latitude = right.latitude;
		this->longitude = right.longitude;
		return *this;
	}

}
