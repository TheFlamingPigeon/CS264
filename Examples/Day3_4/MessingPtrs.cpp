#include <iostream>

using namespace std;

void changeValues(int *);// function prototypes.
void changeValues1(int *);
void printValues(int []);

int main (void ) {

 int value1 = 10, value2 = 3;
 int list [] = {1,5,7,9,10};
 cout << "The value of list is " << list << endl;

 //list++; // Incrementing Pointer - Results in an error
 
 int * ptr = list; 
 ptr++;
 
 cout << "The value of list is " << ptr << endl;

 cout << "The value of in second element is " << *ptr << endl;

 changeValues(list);
 
 printValues(list);
 
 cout << endl;
 
 changeValues1(list);
 
 printValues(list);
 
 return 0; // everything is ok.

}

void changeValues(int * x){
	
	for (int i =0; i<5;i++){
		
		*x = 99; // use the address in x to change the value of the variable whose address is in x.
		x++; // increment the pointer x so that it has the address of the next element.
	}
}

void changeValues1(int * x){
	
	for (int i =0; i<5;i++){
		
		x[i] = 66; // use the address in x to change the value of the variable whose address is in x.
	
	}
}

void printValues(int l [])
{
	for (int i=0; i<5; i++)
	{
		cout << l[i] << "  " ;
	}
	
}