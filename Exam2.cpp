#include "Person.h"
#include "Movie.h"
#include <iostream>
using namespace std;

void testMovie();

int main()
{
	testMovie();



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