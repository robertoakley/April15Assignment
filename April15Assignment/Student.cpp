#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name) 
{
    this->Name = name;
    this->TotalGrade = 0;
}

void Student::AddGrade(double grade) 
{
    this->TotalGrade += grade;
}

double Student::CalcAverage(int average)
{
    return this->TotalGrade / average;
}

string Student::getLetterGrade(double gradeFinal)
{
    if (gradeFinal >= 100)

    {
        return " A+ ";
    }
    else if (gradeFinal >= 93)
    {
        return " A ";
    }
    else if (gradeFinal >= 90)
    {
        return " A- ";
    }
    else if (gradeFinal >= 87)
    {
        return " B+ ";
    }
    else if (gradeFinal >= 83)
    {
        return " B ";
    }
    else if (gradeFinal >= 80)
    {
        return " B- ";
    }
    else if (gradeFinal >= 77)
    {
        return " C+ ";
    }
    else if (gradeFinal >= 73)
    {
        return " C ";
    }
    else if (gradeFinal >= 70)
    {
        return " C- ";
    }
    else if (gradeFinal >= 67)
    {
        return " D+ ";
    }
    else if (gradeFinal >= 63)
    {
        return " D ";
    }
    else if (gradeFinal >= 60)
    {
        return " D- ";
    }
    else
    {
        return " F ";
    }

}
