// What is the output of ths program?
#include <iostream>
// void PrintInteger is a global variable thus it is able to be called inside the main function
// the function prints what ever the variable is equal to.
void PrintInteger(int variable)
{
	std::cout << variable << std::endl;
	// prints the value of variable to the consol
	system("pause");
	// added by me. pauses the consol so i can see it better and check if i was correct 
}
int main()
{
	int the_variable = 1;
	// assigns the_variable a value of 1
	PrintInteger(the_variable);
	// prints 1
	{
		PrintInteger(the_variable);
		// prints 1
		int the_variable = 2;
		// reassigns the_variable to a value of 2
		PrintInteger(the_variable);
		// prints 2
		{
			PrintInteger(the_variable);
			// prints 2
			int the_variable = 3;
			// reassigns the_variable to a value of 3
			PrintInteger(the_variable);
			// prints 3
		}
		PrintInteger(the_variable);
		// prints 2
	}
	PrintInteger(the_variable);
	// prints 1
}
// changed all "the_variable" to just "variable" and it did the same thing. why is that?