#include "Person.h"
#include "Movie.h"
#include "City.h"
#include "Itinerary.h"
#include <iostream>
using namespace std;

void testMovie();
void testItinerary();

int main()
{
	//testMovie();
	testItinerary();


	return 0;
}


void testMovie()
{
	Person Me("Gavin", "Smith", "1/31/2006");
	Person You;
	Person Them("Jessica", "Holt", "4/12/2003");

	Person movie1CastList[2]{ You, Them };
	Person movie2CastList[3]{ You, Me, Them };

	Movie Movie1("Jurassic Train", Me, movie1CastList, 2, 140);
	Movie Movie2("The Nutcracker", You, movie2CastList, 3, 100);

	cout << Movie1 << endl;
	cout << Movie2 << endl;
	
}

void testItinerary()
{
	City City1("Conway", 35.0518, 92.4367);
	City City2("Jonesboro", 35.8357, 90.7051);
	City City3("St.Louis", 38.6274, 90.1982);
	City City4("Little Rock", 34.7445, 92.2880);

	//City* CityList1 = new City[2]{ City1, City2 };
	//City* CityList2 = new City[2]{ City3, City4 };

	Itinerary Trip1;
	Trip1.addCity(City1);
	Trip1.addCity(City2);

	Itinerary Trip2;
	Trip2.addCity(City3);
	Trip2.addCity(City4);

	Itinerary Trip3;
	Trip3 = (Trip1 + Trip2);
	cout << Trip3.getTotalDistance() << endl;
	
}