/*
This file impliments the Movie Class as defined in Movie.h

I affirm that all code given below was written solely by me,
Nathaniel Lewis Graham, and that any help I received adhered
to the rules stated for this exam.
*/
#include "Movie.h"

Movie::Movie() // Constructor for Movie Class
{
	// Default settings
	title = "Psych: The Musical";
	genre = "Comedy";
}

Movie::Movie(string Title, string Genre, int ShowTime) // Overloaded Constructor for specific settings
{
	title = Title;
	genre = Genre;
	showTime = ShowTime;
}

// returns title
string Movie::GetTitle() { return title; }

// returns genre
string Movie::GetGenre() { return genre; }

// returns showtime
int Movie::GetShowtime() { return showTime; }
