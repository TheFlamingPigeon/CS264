/*
Joe Duffin July 2015

This program will illustrate the difference between a function (action1)
designed to change the value in a variable (num1) declared in the function main
and a function (action2) whose design does not change the value in variable declared
in main.
In both functions, we making calls to them by putting the variable num1 in to
thier actual parameter lists. However, it is important to notice the difference
beteween the format of the formal parameters between the two functions.

*/
#include <iostream>

using namespace std;

void action1(int & value){

  value = 99;

}

void action2(int value){

  value = 0;

}


int main(){

 int num1 = 17;  // declare and initialise a variable num1
 
 cout << "The value of num1 is : " << num1 << endl;
  
 action1(num1); // function call to action1, giving num1 as an actual parameter

 cout << "The value of num1 is : " << num1 << endl;

 action2(num1); // function call to action2, giving num1 as an actual parameter

 cout << "The value of num1 is : " << num1 << endl;

 return 0;
}
