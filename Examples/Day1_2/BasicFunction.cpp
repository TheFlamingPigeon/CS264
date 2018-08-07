#include <iostream>

using namespace std;

//int sum(int, int); 
// you only need this prototype if you want to define the function beneath main

/*
 This function adds two numbers together.
 
 Function Decleration:
	int sum(int a,int b) { 
		return a+b;
	}
 
*/
int sum(int a,int b, int c) { // Function Signiture - how to call the function
  return a + b + c;
}

int main() {

 int value = 0;
 int number1 = 9, number2 =10;
 int numC = 2;
 
 value = sum(number1,number2, numC);

 cout << "The value of " << number1 << " + " << number2 << " is : " << value << endl;

 value = sum(6,7,8);
 cout << "The value of " << 6 << " + " << 7 << " + " << 8 << " is : " << value << endl;

 
 return 0; // not necessary but good practice.

}