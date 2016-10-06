//Find the error in each of the following functions and explain how to fix them.

int sum(int x, int y)
{
	int result;
	result = x + y;
	// needs a return value
}


int sum(int n)
{
	if (0 == n)
		return 0;
	else
		n = n + n;
	// the "n" gets redifined to many times.
	// change some n into other variables
	// there are no {} around the if and else 
}



#include <iostream>
int main()
{
	double x = 13.6;
	std::cout << "square of 13.6 = " << square(x) << std::endl;
	// square is undefined and needs to be defined outside of the function
}
}// unneeded and can be taken out
int square(int x)
{
	return x * x;
}
