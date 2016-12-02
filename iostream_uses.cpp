#include <iostream>

using namespace std;

int main(void){
	// Standard error stream (cerr)
	char str[] = "Unable to read....";

	cerr << "Error message: " << str << endl;

	// Standard log steam (clog)
	// This one is buffered. cerror isn't.

	clog << "Error message: " << str << endl;

	return 0;
}