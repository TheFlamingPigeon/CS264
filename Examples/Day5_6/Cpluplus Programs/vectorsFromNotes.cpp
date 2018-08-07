/* Joe Duffin 12th December 2017

This program illustrates the ways that you can manipulate vectors and also the use of 
the auto keyword in C++.
Recall that auto was introduced in C++11 to allow the compiler to determine the type of a varable at compile time.
Before looking at this code, you should read the Vectors vs Arrays.docx file in the Day 5 folder. 

*/
#include <iostream>
#include <vector>  // you need to include this if you want to use vector

using namespace std;

class MyClass {
	
		private: 
	
			int value; 
	
		public:
		
			MyClass() { value = 0;} // default constructor
			
			MyClass(int x) : value(x) { 
			
			}
			~MyClass(){
	
			}
			
			void showMe(){
				
				cout << "The state of this object is as follows: Member value is : " << value << endl;
				
			}
	
}; // end of the MyClass declaration

int main (){
	
	// Chack out http://www.cplusplus.com/reference/vector/vector/ for further information on vectors in C++
	
	vector <MyClass> list; // create a vector of MyClass object of indeterminate size.
	list.push_back(MyClass(35)); // add a new object to the vector
	list.push_back(MyClass(22)); // add a new object to the vector
	list.push_back(MyClass());     // add a new default object to the vector
	
	// using an stl iterator to go through the elements in a vector
	for (vector<MyClass>::iterator i = list.begin();i < list.end(); i++){
		
		i->showMe();
	}
	
	// using a for loop to go through the elements in a vector.
	for (int i=0;i< list.size();i++){
		
		list[i].showMe();
		
	}
	//using auto to detect the type of information to be stored in i
	for (auto i = list.begin(); i<list.end(); i++){
		
		i->showMe();
	}
	
	// iterating over a sequence (python syntax is similar to this)
	for (auto i : list){
		
		i.showMe();
		
	}
	
	
} // end of the program.




