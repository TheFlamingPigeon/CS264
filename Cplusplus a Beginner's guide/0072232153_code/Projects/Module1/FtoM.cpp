/*   
   Project 1-1  
  
   This program converts feet to meters.  
  
   Call this program FtoM.cpp.  
*/  
  
#include <iostream>  
using namespace std;  
  
int main() {   
  double f; // holds the length in feet  
  double m; // holds the conversion to meters  
  
  cout << "Enter the length in feet: "; 
  cin >> f; // read the number of feet   
  
  m = f / 3.28; // convert to meters 
  cout << f << " feet is " << m << " meters.";  
 
  return 0; 
}
