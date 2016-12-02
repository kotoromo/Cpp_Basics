#include <iostream>
 
// Function declaration
void func(void);

/*
	A static variable is one that remains in memory during the life-time of a program.
*/
static int count = 10; /* Global variable */

int main() {
	/*
		A register storage class variable is one that is stored in a register instead of the RAM.
		Since it isn't assigned a memory direction, the unary operator & cannot be applied to it
	*/

	register int register_var = 50;

	/* An auto storage class variable is the default storage class for all the variables*/
	auto int variable = 40;

   while(count--) {
      func();
   }
   return 0;
}

// Function definition
void func( void ) {
   static int i = 5; // local static variable
   i++;

   // we use the std thingy because we haven't declared the namespace we're using, in this case, std.
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}