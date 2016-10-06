/*
This file Defines the Class Movie to be implimented in Movie.cpp

I affirm that all code given below was written solely by me,
Nathaniel Lewis Graham, and that any help I received adhered
to the rules stated for this exam.
*/
#pragma once
#include <string>
using namespace std;

class Movie
{
public:
	Movie();
	Movie(string, string, int);

	string GetTitle();
	string GetGenre();
	int GetShowtime();

private:
	string title;
	string genre;
	int showTime;
};