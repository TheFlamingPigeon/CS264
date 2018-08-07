// Joseph Duffin July 11th 2018  CS264ss
// Adapted from Module 9 in Schildt's book
// Illustrating how to overload the constructor and how to copy one object to another
// i.e. assigning one object the value of the other object, which leaves you still with two
// distinct objects.
 
#include <iostream> 
using namespace std; 
 
class Sample { 
public: 
  int x; 
  int y; 
 
  // Overload the default constructor. 
  Sample() { x = y = 0; } 
 
  // Constructor with one parameter. 
  Sample(int i) { x = y = i; } 
 
  // Constructor with two parameters. 
  Sample(int i, int j) { x = i; y = j; } 
};   
 
int main() {   

// Valid ways of creating sample objects on the stack

  Sample t;         // invoke default constructor 
  Sample t1(5);     // use Sample(int) 
  Sample t2(9, 10); // use Sample(int, int) 
  Sample t3 = Sample(8,6); // another way of using Sample(int,int)
  
  // Sample object created from the Heap memory.
  
  Sample * t4 = new Sample(11,99);

  cout << "t.x: " << t.x << ", t.y: " << t.y << "\n"; 
  
  cout << "t1.x: " << t1.x << ", t1.y: " << t1.y << "\n"; 
  cout << "t2.x: " << t2.x << ", t2.y: " << t2.y << "\n"; 
  cout << "Added by Joe 2018" << endl;
  cout << "t3.x: " << t3.x << ", t3.y: " << t3.y << "\n"; 
  
  // t4 is a pointer and needs the arrow operator
  cout << "t4->x: " << t4->x << ",  t4->y : " << t4->y << "\n";
  
  // Another way of accessing t4
  cout << "(*t4).x: " << (*t4).x << endl;
  
  // Assigning one object to another
  t1 = t2;  // This performs a bitwise copy of t2 into t1#
  cout << "Copying object t2 into t1" << endl;

  cout << "t1.x: " << t1.x << ", t1.y: " << t1.y << "\n"; 
  cout << "t2.x: " << t2.x << ", t2.y: " << t2.y << "\n"; 
  
  // Change t1 and verify that is separate from t2 after the copy.
   cout << "Checking the values of object t2 into t1 after chaning t2 values" << endl;
  t2.x = 7; t2.y=87;
  
  cout << "t1.x: " << t1.x << ", t1.y: " << t1.y << "\n"; 
  cout << "t2.x: " << t2.x << ", t2.y: " << t2.y << "\n"; 
 
  delete t4; // Returns memory to the heap
 
  return 0; 
}