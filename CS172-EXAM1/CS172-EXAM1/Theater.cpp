/*
This File Impliments the Class defined in Theater.h

I affirm that all code given below was written solely by me,
Nathaniel Lewis Graham, and that any help I received adhered
to the rules stated for this exam.
*/

#include <iostream>
#include "Theater.h"
using namespace std;

// constructor for Theater with specific settings
Theater::Theater(string Name, string Phone)
{
	theatreName = Name;
	phoneNumber = Phone;
	popcornPrice = 7;
	cokePrice = 2;
	listingNumber = 0;
}

// This function needs to add a movie to an array of movie listings
void Theater::AddMovie(Movie& Movie) {

		movieListings[listingNumber] = Movie;
		listingNumber += 1;
	return;
}

// This function will search the movie listings within Theatre for showtimes
string Theater::GetMovieForHour(int Hour)
{
	if (Hour == -1) {
		return "";
	}
	else
	{
		for (int i = 0; i < 11; i++)
		{
			if (movieListings[i].GetShowtime() >= Hour)
			{
				cout << movieListings[i].GetTitle() << endl;
				return movieListings[i].GetTitle();
			}
		}
	}
	return "";
}

// This function will search the movie listings within Theatre for upcoming movie genres
int Theater::GetShowTimeForGenre(string Genre)
{
	for (int i = 0; i < 11; i++)
	{
		if (movieListings[i].GetGenre() == Genre)
		{
			cout << movieListings[i].GetGenre() << endl;
			cout << movieListings[i].GetShowtime() << endl;
			return movieListings[i].GetShowtime();
		}
	}

	return -1;
}

// Returns popcorn price
int Theater::GetPopcornPrice() { return popcornPrice; }

// returns coke price
int Theater::GetCokePrice() { return cokePrice; }
