/*
. Write a function that returns the smaller of two floats that are passed to it:
You should make a program that asks the user for two different numbers such that it
outputs:
Enter value 1: 10.6
Enter value 2: -67.8
Pass the two numbers into a function and output what the function returns:
The smaller number is: -67.8
*/
// need user input first, then pass into function, function decides which is smaller, print smaller.

#include <iostream>

// declare floats
float v1;
float v2;

int main()
{
	// user input
	std::cout << "Enter Value 1: ";
	std::cin >> v1;
	std::cout << "Enter Value 2: ";
	std::cin >> v2;

	// need to pass numbers into a function and then it decides which is larger if else statment
	// float function
	float func();
	{
		if (v1 < v2)
		{
			std::cout << " The smaller number is: " << ('%i', v1) << std::endl;
		}
		else
		{
			std::cout << " The smaller number is: " << ('%i', v2) << std::endl;
		}
	}
	system("pause");
}