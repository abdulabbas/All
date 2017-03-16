// dog.cpp
#include "Dog.h"
#include "Dog.h"

std::string Dog::getBreed() {
	return this->breed;
}

void Dog::setBreed(std::string pBreed) {
	this->breed = pBreed;
}

Dog::Dog() {

}

Dog::Dog(std::string breed) {
	this->setBreed(breed);
}