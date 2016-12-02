/*
	The extern storage class is used to give a reference of a global variable that is visible to ALL the program files.
	When we use extern the variable cannot be initialized as all it does is point the variable name at a storage location
	that has been previously defined.

	When we have multiple files and you define a global variable or function, which will be used in other files also, 
	then extern will be used in another file to give reference of defined variable or function in another file.
*/

#include <iostream>

int count;
extern void write_extern();

int main(){
	count = 5;
	write_extern();
}