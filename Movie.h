#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include "Person.h"
using namespace std;
class Movie
{
private:
	string title;
	Person director;
	Person* cast;
	int numOfCast;
	int runtime;
public:
	Movie();
	Movie(string title, Person director, Person* cast, int numOfCast, int runtime);
	Movie(Movie& otherMovie);
	~Movie();
	void setTitle(string title);
	void setDirector(Person director);
	void setCast(Person* cast);
	void setNumOfCast(int numOfCast);
	void setRuntime(int runtime);
	string getTitle();
	Person getDirector();
	Person* getCast();
	int getNumOfCast();
	int getRuntime();
	static bool isLongMovie(int min);
	friend ostream& operator<<(ostream& stream, const Movie& movie);
	Movie& operator=(const Movie& right);
};
#endif

