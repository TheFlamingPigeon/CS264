#include<iostream>

using namespace std;

void swap (int &, int &); // prototype of a function swap.


int main(void){

 int x=5;
 int y=7;

 int * uno; 
 int * dos;

 uno = &x; //store the memory address of the variable x in the pointer (address) variable uno
 dos = &y;  //store the memory address of the variable y in the pointer (address) variabble dos

 cout << "The pointer value of uno is " << uno << endl;

 cout << "The value of x is : " << x << endl;
 cout << "The value of y is : " << y << endl;

 // *uno  allows us to look at the address in uno and examine the variable at that address
 // the "*" opearator goes to the address in uno and retrieves the value at that address.

 cout << "The int value stored at the address pointed to by uno is " << *uno << endl;
 cout << "The int value stored at the address pointed to by dos is " << *dos << endl;

 // After swapping using the pointer containing the addresses of the variables. 

 cout << "Swapping using pointers.............. " << endl;
 cout << "Remember we are not actualling passing the variables but pointers to the variables redirected to the variables" <<endl;

 swap(*uno,*dos); 

 cout << "The updated value of x is : " << x << endl;
 cout << "The updated value of y is : " << y << endl; 


 return 0;

}

// Swap values in the variable.
void swap(int &a, int &b){

 int temp;
 temp = a;
 a=b;
 b=temp;

}


