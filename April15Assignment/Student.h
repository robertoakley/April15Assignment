#pragma once
#include <string>
#include <iostream>
using namespace std;


class Student
{
private:

    string Name;

    double TotalGrade;

public:

    string getLetterGrade(double);
    Student(string); //Constructor!
    void AddGrade(double);
    double CalcAverage(int);
};
