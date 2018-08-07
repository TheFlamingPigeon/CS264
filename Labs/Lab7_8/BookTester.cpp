/*
	Note: Lab 7&8 - Part B - Question 5 - Book Class Main Function
	Date: 17/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
#include "Book.h"
using namespace std;

// Function Prototypes
void dispBook(Book);

int main(){
	Book b1 = Book();
	Book b2 = Book(1949, 328, "1984", "George Orwell", "Dystopian");
	Book b3 = Book(1942, 350, "Monkey", "Wu Ch'eng-En", "Chinese Mythology");
	
	dispBook(b1);
	dispBook(b2);
	dispBook(b3);
	
	// system("PAUSE");
	return 0;
}

void dispBook(Book b){
	cout << b.getTitle() << endl;
	cout << "Written by " << b.getAuthor() << " in "<< b.getYear()<< endl;
	cout << "Genre: " << b.getGenre() << endl;
	cout << "Pages: " << b.getPages() << endl;
	cout << endl;
}