#pragma once
// this is the header. this is where the class goes.

// need to have functions that do it and not just stuff it all in the class.
// have the class call functions from the source code and use that. 

class MyString
{
	// making array
	char m_data[456];
	int m_length;

	// second array for comparing if they the same
	char m_data2[879];
	int m_length2;

public:
	// constructors
	MyString();
	MyString(char data[]);
	// prototypes for the function
	int returnLength();
	char accessIndex(int i);

	// itll take in an argument of type stringclass
	// create another instance of it not a new class
	// make another constructor with the string name differnet. like right now everything 
	// is matthew make this one cicero
	// need another array, something to see what the length is and something that will compare.
	// compare with an if statement like: if (returnLength is > retrunLength2). or use bool somehow

	// making a new constructor
	MyString(char data2[]);
	// fucntion prototype for finding string length for second string
	int returnLength2();

	// prototype for funtion that contains an if statement that
	// compares if the strings are the same length
	int compareFunc(int returnLength(), int returnLength2());


};
