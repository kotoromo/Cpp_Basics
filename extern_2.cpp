#include <iostream>
using namespace std;


extern int count;

void write_extern(void){
	cout << "Count is " << count << endl;
}

//To compile: g++ extern_1.cpp extern_2.cpp -o write
