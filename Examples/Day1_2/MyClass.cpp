#include <iostream>

using namespace std;

class MyClass {

 int y; // Class attribute

 public: 
 MyClass(int x){ y = x;}
 void setValue(int x){y = x;}
 int getValue(){return y;}

};


int main (){

 int value;

 MyClass item(5);

 value = item.getValue();

 cout << "The value in the newly created class is : " << value << endl; 

 return 0;

}
