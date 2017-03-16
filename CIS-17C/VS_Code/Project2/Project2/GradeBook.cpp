//A Grade Book Program
//March 13th 2017
//Lab

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "GradeBook.h"

GradeBook::GradeBook(const std::string & className, const std::vector<int>& studentGrades)
{
	this->className = className;
	this->grades = studentGrades;
}

void GradeBook::setCourseName(const std::string & newName)
{
	this->className = newName;
}

std::string GradeBook::getCourseName() const
{
	return this->className;
}

void GradeBook::sortByGrade()
{
	std::sort(this->grades.begin(), this->grades.end());
}

const int GradeBook::getMinimumGrade()
{
	int min = this->grades.at(0);
//Enhanced For Loop
	for (int element : this->grades) {
		if (element < min) {
			min = element;
		}
	}
	return min;
}





const int GradeBook::getMaximumGrade()
{
	return *(max_element(this->grades.begin(), this->grades.end()));
}

const double GradeBook::getClassAverage()
{
	double sum = 0;
	//go through vector, to add each item into Sum
	for (std::vector<int>::iterator it = this->grades.begin(); it != this->grades.end(); ++it) {
		sum += *it;
	}
	return sum / this->grades.size();
}
const int GradeBook::getMedianGrade()
{
	this->sortByGrade();
	if(this->grades.size()% 2 != 0){ 
		//odd number
		int index = this->grades.size() / 2;
		return this->grades.at(index);
	}
	else
	{
		int index = this->grades.size() / 2;
		int item1 =  this->grades.at(index);
		int item2 =  this->grades.at(index + 1);
		int avg = (item1 + item2) / 2;
		return avg;

	}

	
}

void GradeBook::outputGrades()
{
	for (int currentGrade : this->grades) {
		std::cout << currentGrade << std::endl;
	}
}
