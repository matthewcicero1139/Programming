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
	name.returnLength2();

	// compares if strings are same length

}
