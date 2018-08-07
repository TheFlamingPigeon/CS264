/*
	Note: Testing memory leaks
	Date: 2/7/2018
	Name: Matthew Rowe
*/

#include <iostream>

using namespace std;


int main(){
	
	
	// Allocates 1234.2MB of memory in a leaky fashion
	for(long long i = 0; i < 80000000; i++){
		int* temp = new int;
		//delete temp;
	}
	
	//system("PAUSE"); // Commet this line out to crash a computer
	system("testone.exe");
	
	system("PAUSE");
	return 0;
	
}