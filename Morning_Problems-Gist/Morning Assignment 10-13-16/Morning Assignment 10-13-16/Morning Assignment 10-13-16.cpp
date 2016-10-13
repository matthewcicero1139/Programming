// does not work. i know what to do, i just dont know how to do it.
// from what i can tell i am having the trouble with the loops

//Morning Assignment: Create a function that takes in an array and the size of the array
// and return the sum of the two largest values in the array.

//question:
// is the null operator only for character arrays?

//steps:
/// need function
/// need array 
// need size of array
// need thing that finds two largest  values
// make first part i = what the number is then loop through until find another until finds largest then
// make another loop with an if statement that is k is less than i but greater than everything else.
// need function to return large1 + large2

#include <iostream>
// array
int m_data[456] = { 45,6,8,46,84,53,4,52,87,5,89,8 }; // largest are at index 8-87 and index 10-89
													  // length 12 
// what the length will be
int m_length;
// what the two largest values in the array will be called
int large1;
int large2;

// fucntion
// fixed one part. function wasnt taking in an array now it is
// what if i make the array in the function different from the array outside it and go the route of the string class array.

int m_function(int data[])
{
	int length = 0;
	// while loop 
	// fixed part by putting "length" in the array in the while loop
	while (data[length] != '\0')
	{
		m_data[length] = data[length];
		// adding one for everytime it loops
		length++;
	}
	// making m_length equal to the value of length 
	m_length = length;
	// taking out because i dont think the question is asking to return the length of the array as well
//	return m_length;

	// makeing 2 for loops to find two largest values
	// need i to  equal something in the array. 
	// what if i use i as the index and then it takes the value of that index and keeps it
	// then goes to another and uses an if statement to see if i is larger or smaller then next value.
	// or i make int large1 equal the index and do what is above and if something is larger it replaces 
	// int large1 value

	// first for loop to find largest number
	// i need something that makes the 2 loops differ from each other. like i < m_length && i < k
	for (int i = 0; i < m_length; i++)
	{
		// would that work? i < m_length if it was actually working.
		large1 = i;
		// should take whats in the array index but it is just taking the index
	}

	// second for loop to find second largest number
	for (int k = 0; k < m_length && k < large1; k++)
	{
		large2 = k;
	}

	// putting this now because i know that i will need it and dont want to forget it.
	return large1 + large2;
}

int main()
{
	// calling the function
	int m_fucntion(int m_data);
}