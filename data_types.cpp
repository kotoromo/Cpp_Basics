#include <iostream>
using namespace std;

int main(){
	// use of typedef:
	typedef int metres;
	metres distance = 9;

	// Declaration of a wchar_t variable:
	wchar_t wide_char = L'Ñ'; // note: It should be around simple quotes, not double.

	cout << "Wide char: " << wide_char << endl;

	cout << "How many metres?: " << distance << endl;

	// Defining a constant:
	// It can be done with either a preprocessor directive AKA #define A 10 or with the reserved word 'const'
	const int constant = 5;

	/* This produces an error:
	cout << "Constant = " << constant << endl;
	constant = constant + 3;
	cout << "Constant now = " << constant << endl;
	*/

	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;
	cout << "Size of long int: " << sizeof(long int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
