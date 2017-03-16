// main.cpp
#include "Dog.h"
#include <iostream>

int main() {
	// Deferred construction.
	// Create the name BEFORE the dog exists.
	Dog* rover;

	// After getting some input.
	std::string breed = "Great Dane";
	rover = new Dog(breed);
	//Dog fido("Great Dane");


	// d.breed = "Whatever";

	// Getter / Accessors
	// std::string dog::getBreed();
	// Returns a string because I asked it to retreive the breed.
	// std::cout << d.breed;

	// Mutator / Setter
	// void dog::setBreed(std::string breedToSet);
	// d.breed = "Great Dane";
}

