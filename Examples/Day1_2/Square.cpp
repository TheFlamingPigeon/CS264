/*
	Note: Squareing Function
	Date: 3/7/2018
	Name: Matthew Rowe
*/

#include <iostream>
using namespace std;

int square(int);
void printDetails();

int main(){
	
	/*
	int s, t;
	
	cout << "Please enter a number: ";
	cin >> t;`// User input
	
	s = square(t);
	cout << t << " squared is: " << s << endl;
	*/
	printDetails();
	for(int i = 1; i <= 50; i++){
		cout << i << " squared is: \t" << square(i) << endl;
	}
	
}

/*
	Function takes in an intager x and returns the square of the number
*/
int square(int x){
	return x*x;
}

void printDetails(){ 
	cout << "\n";
	cout << "Matthew Rowe - Student" << endl;
	cout << "Texas Tech University / University of Ireland - Maynooth" << endl;
	cout << endl;
}

void swap(int x, int y){
	
}