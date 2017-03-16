//A Grade Book Program
//March 13th 2017
//Lab




// main.cpp
#include "GradeBook.h"
#include <iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> initialGrades;
	initialGrades.push_back(75);
	initialGrades.push_back(75);
	initialGrades.push_back(75);
	initialGrades.push_back(75);
	initialGrades.push_back(75);
	initialGrades.push_back(50);
	initialGrades.push_back(50);
	initialGrades.push_back(50);
	initialGrades.push_back(50);
	initialGrades.push_back(50);
	initialGrades.push_back(50);
	initialGrades.push_back(50);
	initialGrades.push_back(90);
	initialGrades.push_back(100);
	initialGrades.push_back(50);
	initialGrades.push_back(80);
	GradeBook grades("CIS17C", initialGrades);
	grades.outputGrades();
	grades.sortByGrade();
	grades.outputGrades();
	cout << "min is " << grades.getMinimumGrade() << " and max is " << grades.getMaximumGrade() << endl;
	cout << "average grade (what I will curve to) is " << grades.getClassAverage() << endl;
	cout << "median grade (what they wish I would curve to) is " << grades.getMedianGrade() << endl;
}