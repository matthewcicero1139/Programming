#pragma once

// classes 

// bird should print "tweet";
// and dog should print "woof";
// and cat should print "meow".

class Animal
{
public:
	// need default constructor
	Animal();
	// putting the virtual function thing in
	virtual void speak() = 0;
};

class Bird : public Animal
{
public:
	// need defualt constructor for all things
	// making constructor
	Bird();
	void speak(); // say tweet
};

class Mammal : public Animal
{
public:
	// making the constructor
	Mammal();
	void speak();
	void bark();
};

// should i put public Mammal. doing it and will see the outcome
class Cat : public Mammal
{
public:
	Cat();
	void speak(); // say meow
	void purr(); // say purr
};

//should i put public Mammal. doing it and will see the outcome.
class Dog : public Mammal
{
public:
	// constructor
	Dog();
	void speak(); // say woof
	void bark(); // say bark
};

