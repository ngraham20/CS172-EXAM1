/*
This file Defines the Class Movie to be implimented in Movie.cpp
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