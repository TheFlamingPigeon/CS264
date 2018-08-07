/*
	Note: Lab 7&8 - Part B - Question 5 - Book Class Definition
	Date: 17/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
using namespace std;

class Book{
	int pages, year;
	string title, author, genre;
public:
	// Constructor and Destructor
	Book();
	Book(int y, int pg, string t, string aut, string g);
	
	// Setters
	void setYear(int y) { year = y; }
	void setPages(int pg) { pages = pg; }
	void setTitle(string t)  { title = t; }
	void setAuthor(string aut) { author = aut; }
	void setGenre(string g) { genre = g; }
	
	// Getters
	int getYear() { return year; }
	int getPages() { return pages; }
	string getTitle() { return title; }
	string getAuthor() { return author; }
	string getGenre() { return genre; }

	// Working Functions
};

Book::Book(){
	year = 1900;
	pages = 0;
	title = "undefined";
	author = "undefined";
	genre = "undefined";
}

Book::Book(int y, int pg, string t, string aut, string g){
	year = y;
	pages = pg;
	title = t;
	author = aut;
	genre = g;
}