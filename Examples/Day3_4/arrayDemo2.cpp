/*

Joe Duffin 20th of November 2017
1) Manipulating and array of numbers inside a method. Arrays are passed by reference in C++, so if you change 
the contents of the array inside the method, then you are changing the array in the calling scope or context.
See this example using changeContents to change the values in the array, followed by printContents to view
the values in the array.

2) You can also pass an array to a method by using pointers. 

See the changeOtherContents, adn changeOtherContents2, methods.


*/

#include <iostream>
#include <string>

#define MAX 10  // The preprocessor reads this and replaces MAX with the value 10 throughout your program. 
		// This happens before the compilation happens.

using namespace std;


void changeContents (int temp [], int value){

  for (int i =0; i < MAX;i++){

  	 temp[i] = value;
  }

} // end of changeContents.

// We will have to change the name of the method as we can not overload a method in this situation (pointer vs array)
// as the first parameter, see the following link 
// https://www.ibm.com/support/knowledgecenter/SSPSQF_9.0.0/com.ibm.xlcpp111.aix.doc/language_ref/cplr314.html

void changeOtherContents (int * temp, int value){  

  for (int i= 0; i < MAX; i++){

	temp[i] = value; // temp is a pointer and it can be indexed by [] brackets.

  }

}

void changeOtherContents2 (int * temp, int value){  

  for (int i= 0; i < MAX; i++){

	*temp = value; // temp is a pointer that is dereferenced by using the * operator bringing us to the array element.
        temp++; // on to the next array element.  
  }

}


void printContents (int temp []){

 for (int i =0; i < MAX;i++){

  	 cout << "The value in element " << i << " is " << temp[i] << endl;
  }


} // end printContents


int main () {


 int list[MAX];

 changeContents(list, 25); // passing by reference

 printContents(list);

 changeOtherContents(list, 18); // passing by pointer, and usign [] square bracket indexing as for an array.

 printContents(list);

 changeOtherContents2(list, -123); // passing by pointer, and traversing using pointer arithmetic

 printContents(list); 


}  // end of main method.
