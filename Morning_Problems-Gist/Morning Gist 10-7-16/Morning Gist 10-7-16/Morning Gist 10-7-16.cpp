//4 things above paste
// Morning Assignment: Create a function that swaps the value of two integers with\
 out the use of a temporary variable.

#include <iostream>

int a = 1;
int b = 2;

//int func(int, int)
//{
//	//int Array[2] = { a, b };
//
//	// for loop to make them swap but how? do i need the array for this?
//}


int main(int , int)
{
/*
	for (int i = 0; i < b; i = b)
	{
		a = b;
		b = a;

		return a;
	}*/
}

// the answer
void swap(int &a, int &b)
{
	a = b + a;
	b = a - b;
	a = a - b;
}
// now have to do it with characters