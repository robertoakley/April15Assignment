#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

int main()

{
	int NumberOfGrades;
	string studentname;

	cout << "Enter name: ";
	getline(cin, studentname);
	Student student(studentname);
	cout << "Enter number of grades to average: ";
	cin >> NumberOfGrades;

	int a = 1;
	while (a <= NumberOfGrades)
	{
		double g; //grade value
		cout << "Enter the #" << a << " grade: " << endl;
		cin >> g;
		student.AddGrade(g);
		a++;
	}


	double Average = student.CalcAverage(NumberOfGrades);
	cout << "Name: " << studentname << ", your grade average is: " << Average << " percent (" << student.getLetterGrade(Average) << ") " << endl;

}

