#include <iostream>
// need to have global variables to put in the program
// makeing a for loop that wi

//rocks
int R = 1;
int r = 1;
//papers
int P= 2;
int p = 2;
//scissors
int S = 3;
int s = 3;
// user input
int a;

//functon for gamestart
//int or char
int gameStart()
{

	printf("Please choose R for 'Rock', P for 'Paper', or S for 'Scissors'. ");
	system("pause");
	std::cin >> a;
	
	return 0;
}


int main()
{
	gameStart();
}