#include <iostream>

using namespace std;

/*
  swap the values of the variables.
*/
void swap (int &a, int & b){

   int temp;

   temp = a;
   a=b;
   b=temp;

}

void swapfalse (int a, int b){

   int temp;

   temp = a;
   a=b;
   b=temp;

}

int main (void ) {

 int value1 = 10, value2 = 3;

 cout << "At first the values are: " << value1 << " and also " << value2 << endl;
 cout << "next we call the swap function........" << endl; 
 swapfalse(value1, value2);
 cout << "After calling the swap function, the values are: " << value1 << " and also " << value2 << endl;
 cout << "Thank you and goodbye" << endl; 
 
 return 0; // everything is ok.

}
