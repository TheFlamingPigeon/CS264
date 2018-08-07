#include <iostream>
#include <iomanip>

using namespace std;

/*
 factorial function  and the use of recursion.
*/

int factorial(int);

int main(void){


  int value = 0;
  cout<< "Please enter a number whose factorial you want to calculate" << endl;  
  cin >> value;
  
  cout << "The factorial of " << value << " is " << factorial(value) << endl; 

  return 0;
}


int factorial(int x){

 if (x <= 0)
  // base case
  return 1;
 else 
  // recursive step
  return x*factorial(x-1);

}


