/*
	Note: Testing memory leaks
	Date: 2/7/2018
	Name: Matthew Rowe
*/

#include <iostream>

using namespace std;

void delay();
void figure();


int main(){
	
	for(int q = 1; q < 102; q++){
		system("cls");
		for(int i = 0; i < q; i++){
			cout << " ";
		}
		cout << "O" << endl;
		for(int i = 0; i < q; i++){
			cout << " ";
		}
		cout << "O" << endl;
		delay();
	}
	
	for(int q = 102; q >= 0; q--){
		system("cls");
		for(int i = 0; i < q; i++){
			cout << " ";
		}
		cout << "O" << endl;
		for(int i = 0; i < q; i++){
			cout << " ";
		}
		cout << "O" << endl;
		delay();
	}
	
	
	system("PAUSE");
	return 0;
	
}

void delay(){
	for(long i = 0; i < 25000000; i++);
}

void figure(){
	cout << "O" << endl;
	cout << "O" << endl;
}
