/*
This file defines the Class Theater to be implemented by Theater.cpp

I affirm that all code given below was written solely by me,
Nathaniel Lewis Graham, and that any help I received adhered
to the rules stated for this exam.
*/
#pragma once
#include <string>
#include "Movie.h"
using namespace std;

class Theater
{
public:
	Theater(string, string);
	void AddMovie(Movie&);
	string GetMovieForHour(int);

	int GetShowTimeForGenre(string);

	int GetPopcornPrice();
	int GetCokePrice();

private:
	string theatreName;
	string phoneNumber;
	int popcornPrice;
	int cokePrice;

	int listingNumber;
	Movie movieListings[11];

};