#pragma once
//A Grade Book Program
//March 13th 2017
//Lab


// Gradebook.h
#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
#include <vector>

class GradeBook {
public:
	GradeBook(const std::string& className, const std::vector<int>& studentGrades);
	void setCourseName(const std::string & newName);
	std::string getCourseName() const;

	void sortByGrade();
	// void reverseSortByGrade();
	const int getMinimumGrade();
	const int getMaximumGrade();
	const double getClassAverage();
	const int getMedianGrade();
	void outputGrades();
private:
	std::string className;
	std::vector<int> grades;
};

#endif