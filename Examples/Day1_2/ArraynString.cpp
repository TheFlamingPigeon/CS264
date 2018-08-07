#include <iostream>
#include <string>  // needed to gain access to the string class.
#include <cstring> // needed for null terminated character string functions e.g strlen(s1)

using namespace std; // this is so I do not have to use std::cout

int main(){

 char word[6] = {'H','e','l','l','o','\0'};

 string greeting = "Hello Joe";
 string adieu = "Good bye Joe";

 cout << word << endl;
 cout << adieu << endl;
 cout << greeting << endl;

 
 cout << " the size of the greeting is " << greeting.size() << " letters" << endl;
 cout << " the size of the word is " << strlen(word) << " letters" << endl;
  


 return 0;

}
