#include "City.h"


City::City()
{
	name = "Conway";
	latitude = 35.0518;
	longitude = 92.4367;
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

double City::getLatitude()
{
	return latitude;
}

double City::getLongitude()
{
	return longitude;
}

City& City::operator=(const City& right)
{
	this->name = right.name;
	this->latitude = right.latitude;
	this->longitude = right.longitude;
	return *this;
}
