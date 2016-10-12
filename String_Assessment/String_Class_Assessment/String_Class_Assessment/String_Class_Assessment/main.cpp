// this is where main fucntion goes.
#include <iostream>
#include "String_Class_Assessment.h"


int main()
{
	//the string
	MyString name = MyString("Matthew");
	// return the strings length
	int len = name.returnLength();
	// access a character at a certain index
	char t = name.accessIndex(2); // whenever i call a function pass what is needed in the parameters at that point.

	//string 2
	MyString name2 = MyString("Cicero");
	// return string 2 length
	name2.returnLength2();

	// compares if strings are same length
	// thing that calls the function from the class
	// should i take name and name2 and use the dot operator to 
	MyString compareFunc(name, name2);

}
// should i make another function that takes both name and name2 and then bring that function
// finding the length of a string i need to have both lengths and then whne it hits the if it should
// 