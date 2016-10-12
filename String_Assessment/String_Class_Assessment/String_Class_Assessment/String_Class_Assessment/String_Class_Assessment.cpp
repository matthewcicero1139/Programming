#include "String_Class_Assessment.h"

// the function defenitions and functons go here

MyString::MyString() {}

// constructor for finding the length of a string
MyString::MyString(char data[])
{
	int length = 0;
	while (data[length] != '\0')
	{
		m_data[length] = data[length];
		length++;
	}
	m_length = length;
}

// functon to return the length of a string
int MyString::returnLength()
{
	return m_length;
}

// function to access the index
char MyString::accessIndex(int i)
{
	return m_data[i];
}

// new constructor for finding if string is same as other
MyString::MyString(char data2[])
{
	int length2 = 0;
	while (data2[length2] != '\0')
	{
		m_data2[length2] = data2[length2];
		length2++;
	}
	m_length2 = length2;
}

// fucntion to return length of string 2
int MyString::returnLength2()
{
	return m_length2;
}

// function that compares if strings are the same size
int MyString::compareFunc(int returnLength(), int returnLength2())
{
	// ints for the if statement to see if they are the same.
	// if int is = to 1 then it is true.
	// if int is = to 0 then it is false.
	int a = 1;
	int b = 0;
	
	// making an if statement first then will try other ideas.
	if (returnLength == returnLength2)
	{
		return a;
	}
	else
	{
		return b;
	}
}



 // functions that have prototypes in the class.
