/*

Joseph Duffin 20th November 2017
This example will help illustrate the relationship between arrays and pointers in C++
In this example we will create an array of 5 integer values and manipulate its contents 
both by using the [] indexing mechanism but also by using a pointer (address storage variable)


*/

#include <iostream> 
#include <string> 

using namespace std;

int main (){

 int numbers[5];  // create an array with 5 numbers in it, the indexing is the same as Java but the creation is not in this case.

 numbers[0] = 12;
 numbers[1] = 16;
 numbers[2] = numbers[3] = numbers[4] = 99; // set the last three values in the array to 99.

 cout << "The first number in the array numbers is " << numbers[0] << endl;

 int * temp = numbers;  // set the temporary address storage variable to the first element of the array.

 temp++; // increment the pointer by 1

 cout << "The value in the second element is " << *temp << endl;

 temp++; // increment the pointer by 1

 cout << "The value in third element is " << *temp << endl;

 temp = temp + 2; // move temp to the last emelent in the array.

 cout << " The value in the last element is " << *temp << endl;

 cout << " Using the name of the array, which is a pointer to the last element, to print out the first element again " << endl;

 cout << "The value in the first element is " << *numbers << endl;

 // Let us generate an array index out of bounds exception, if we can (this is not Java after all).

 cout << "The value beyond the array is " << *(numbers + 6) << endl;

 // Let us use a pointer (address variable) to traverse an array and print out its contents in a loop.
 
 temp = numbers; // restart the temp variable so that it has the address of the first element in the array numbers. 
 
 for (int i=0; i <5; i++){

   cout << "The current value in this element is - " << *temp << endl;  //remember what the * operator does to an address variable.
   temp++;

 } // end for loop
  


} // end of the main method.
