/*
This file defines the Class Theater to be implemented by Theater.cpp
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