#include <iostream>
using namespace std;

int main(void){
	// First we declare our variable:
	int variable = 10;
	//Then we declare a reference to the variable:
	int& reference = variable;

	cout << "Variable: " << variable << endl;
	cout << "Reference: " << reference << endl;
	cout << "Summing to variable expecting to change variable: " << endl;
	variable+=5;
	cout << "The value of reference is: " << reference << endl;
	cout << "The value of variable is: " << variable << endl;

	return 0;
}