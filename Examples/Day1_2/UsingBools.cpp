#include <iostream>
#include <iomanip> // this allows you to cout << boolalpha; and then print bools as true or false

using namespace std;

bool isEven(int); // function prototype

int main (){ 
 
  int value = 10;
 
  bool flag = isEven(value);

  cout << "it is " << flag << " that " << value << " is an even number" << endl;

  cout << boolalpha; // print bools as true or false

  cout << "it is " << flag << " that " << value << " is an even number" << endl;

 return 0;


}

bool isEven(int x){

 if (x%2 == 0){

   return true;

 } else
 {
   return false;
 }
}
