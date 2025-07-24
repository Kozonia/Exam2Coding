#include "Movie.h"



Movie::Movie()
{
	title = " ";
	director = Person();
	numOfCast = 5;
	cast = new Person[numOfCast];
	runtime = 90;

}

Movie::Movie(string title, Person director, Person* cast, int numOfCast, int runtime)
{
	this->title = title;
	this->director = director;
	this->numOfCast = numOfCast;
	this->runtime = runtime;
	this->cast = new Person[numOfCast];
	for (int i = 0; i < numOfCast; i++)
	{
		this->cast[i] = cast[i];
	}
}

Movie::Movie(Movie& otherMovie)
{
	this->title = otherMovie.title;
	this->director = otherMovie.director;
	this->numOfCast = otherMovie.numOfCast;
	this->runtime = otherMovie.runtime;
	delete[] cast;
	cast = new Person[numOfCast];
	for (int i = 0; i < numOfCast; i++)
	{
		cast[i] = otherMovie.cast[i];
	}
}

Movie::~Movie()
{
	delete[] cast;
}

void Movie::setTitle(string title)
{
	this->title = title;
}

void Movie::setDirector(Person director)
{
	this->director = director;
}

void Movie::setCast(Person* cast)
{
	this->cast = cast;
}

void Movie::setNumOfCast(int numOfCast)
{
	this->numOfCast = numOfCast;
}

void Movie::setRuntime(int runtime)
{
	this->runtime = runtime;
}

string Movie::getTitle()
{
	return title;
}

Person Movie::getDirector()
{
	return director;
}

Person* Movie::getCast()
{
	return cast;
}

int Movie::getNumOfCast()
{
	return numOfCast;
}

int Movie::getRuntime()
{
	return runtime;
}

bool Movie::isLongMovie(int min)
{
	if (min > 135)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ostream& operator<<(ostream& stream, const Movie& movie)
{
	stream << movie.title << " is directed by " << movie.director.getFirstName() << " " << movie.director.getLastName()
		<< " and stars ";
	for (int i = 0; i < movie.numOfCast; i++)
	{
		if (i == movie.numOfCast - 1)
		{
			stream << "and " << movie.cast[i].getFirstName() << " " << movie.cast[i].getLastName() << ".";
		}
		else if (movie.numOfCast > 2)
		{
			stream << movie.cast[i].getFirstName() << " " << movie.cast[i].getLastName() << ", ";
		}
		else
		{
			stream << movie.cast[i].getFirstName() << " " << movie.cast[i].getLastName() << " ";
		}
	}
	stream << " This movie is " << movie.runtime << " minutes long." << endl;

	return stream;
}

Movie& Movie::operator=(const Movie& right)
{
	if (this != &right)
	{
		this->title = right.title;
		this->director = right.director;
		this->numOfCast = right.numOfCast;
		this->runtime = right.runtime;
		delete[] cast;
		cast = new Person[numOfCast];
		for (int i = 0; i < numOfCast; i++)
		{
			cast[i] = right.cast[i];
		}
	}
	return *this;
}