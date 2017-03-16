#pragma once
// dog.h
#ifndef DOG_H
#define DOG_H

#include <string>
class Dog {
private:
	std::string breed;
public:
	std::string getBreed();
	void setBreed(std::string breed);
	// Dog();
	Dog(std::string breed);
	// Dog(std::string name);
	// Dog(int x);
};
#endif