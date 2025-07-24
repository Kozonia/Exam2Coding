#include "Itinerary.h"


Itinerary::Itinerary()
{
	numCities = 0;
	cities = nullptr;
}

Itinerary::Itinerary(City* cities, int numCities)
{
	this->numCities = numCities;
	this->cities = new City[numCities];
	for (int i = 0; i < numCities; i++)
	{
		this->cities[i] = cities[i];
	}
}

Itinerary::Itinerary(Itinerary& otherItinerary)
{
	this->numCities = otherItinerary.numCities;
	delete[] cities;
	this->cities = new City[numCities];
	for (int i = 0; i < numCities; i++)
	{
		this->cities[i] = otherItinerary.cities[i];
	}
}

Itinerary::~Itinerary()
{
	delete[] cities;
}

City* Itinerary::getCities()
{
	return cities;
}

int Itinerary::getNumCities()
{
	return numCities;
}

void Itinerary::setCities(City* cities, int numCities)
{
	this->cities = cities;
	this->numCities = numCities;
}

void Itinerary::addCity(City city)
{
	City* newCities = new City[numCities + 1];
	for (int i = 0; i < numCities; i++)
	{
		newCities[i] = cities[i];
	}
	newCities[numCities] = city;
	delete[] cities;
	cities = newCities;
	numCities++;
}

double Itinerary::getDistance(City orig, City dest)
{
	double distance;
	distance = sqrt(pow(orig.getLat() - dest.getLat(), 2) + pow(orig.getLong() - dest.getLong(), 2));
	return distance;
}


double Itinerary::getTotalDistance()
{
	double totalDistance = 0;
	for (int i = 0; i < numCities - 1; i++)
	{
		totalDistance += getDistance(cities[i], cities[i+1]);
	}
	return totalDistance;

}

Itinerary& Itinerary::operator+(Itinerary& right)
{

	for (int i = 0; i < right.numCities; i++)
	{
		addCity(right.cities[i]);
	}
	return *this;
}

Itinerary& Itinerary::operator=(Itinerary& right)
{
	if (this != &right)
	{
		this->numCities = right.numCities;
		delete[] cities;
		cities = new City[numCities];
		for (int i = 0; i < numCities; i++)
		{
			this->cities[i] = right.cities[i];
		}
	}

	return *this;
}