/*
	Note: e computation
	Date: 4/7/2018
	Name: Matthew E. Rowe
*/

#include <iostream>

using namespace std;


int main(){
	
	
	long double fourthPi = 1;
	unsigned long long odd = 3;
	unsigned long long it = 1;
	
	while(it < 25){
		
		if(it % 2 == 0)
			fourthPi = fourthPi - double(1/odd);
		else
			fourthPi += double(1/odd);
		
		
		
		it++;
		odd += 2;
	}
	
	cout << "Pi: " << 1-1/3 << endl;
	
	return 0;
	
}
