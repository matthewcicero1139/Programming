#include "Inheritance.h"
#include <iostream>

// Animal defenition
Animal::Animal()
{
}



// Bird defenition
Bird::Bird()
{
}

// Bird speak defenition
void Bird::speak()
{
	// says Tweet
	printf("Tweet");
}



// Mammal defenition
Mammal::Mammal()
{
}

// Mammal speak defenition
void Mammal::speak()
{
	// says nothing
}

// Mammal bark defention
void Mammal::bark()
{
	// says nothing
}



// Cat defeniton
Cat::Cat()
{
}

// Cat speak defenition 
void Cat::speak()
{
	// says Meow
	printf("Meow");
}

// Cat purr defenition
void Cat::purr()
{
	// says Purr
	printf("Purr");
}



// Dog defenition
Dog::Dog()
{
}

// Dog speak defenition
void Dog::speak()
{
	// says Woof
	printf("Woof");
}

// Dog bark defenition
void Dog::bark()
{
	// says Bark
	printf("Bark");
}
