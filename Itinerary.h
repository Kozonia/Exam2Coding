#ifndef ITINERARY_H
#define ITINERARY_H
#include "City.h"
#include <iostream>
#include <cmath>
using namespace std;
class Itinerary
{
private:
	City* cities;
	int numCities;
public:
	Itinerary();
	Itinerary(City* cities, int numCities);
	Itinerary(Itinerary& otherItinerary);
	~Itinerary();
	City* getCities();
	int getNumCities();
	void setCities(City* cities, int numCities);
	void addCity(City city);
	static double getDistance(City orig, City dest);
	double getTotalDistance();
	Itinerary& operator+(Itinerary& right);
	Itinerary& operator=(Itinerary& right);
};
#endif

