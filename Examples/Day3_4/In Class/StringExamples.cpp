/*
	Note: 
	Date: 5/7/2018
	Name: Matthew E. Rowe
	ID:   17194164
*/

#include <iostream>
#include <cstring>
using namespace std;

// Main method Function Prototypes

int main(){
	
	char forename[] = "Matt";
	char surename[] = "Rowe";
	char fullname[20] = {'\0'};
	
	strcat(fullname, forename);
	strcat(fullname, " ");
	strcat(fullname, surename);
	cout << fullname << endl;
	
	return 0;
}
