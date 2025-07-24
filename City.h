#ifndef CITY_H
#define CITY_H
#include <iostream>
using namespace std;
class City
{
private:
	string name;
	double latitude;
	double longitude;
public:
	City();
	City(string name, double lat, double lon);
	void setName(string name);
	string getName();
	double getLat();
	double getLong();
	City& operator=(const City& right);
};
#endif

