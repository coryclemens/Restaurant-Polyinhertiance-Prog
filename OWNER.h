#pragma once
#include "EMPL.h"
#include <iostream>
using namespace std;
#include <string>


class Owner : public Employee {

public:
	Owner(string name, char classific, double ID, float salary);
	~Owner();

	virtual void calcSal(float monthEarn);
	virtual void display(ostream & out)const;

private:
	float monthPercent = .6f;

};

inline Owner::Owner(string name, char classific, double ID, float salary)
	:Employee(name, classific, ID, salary)
{

}

inline Owner::~Owner()
{


}

inline void Owner::calcSal(float monthEarn)
{

	monthTotal = (monthEarn * monthPercent) + salary;
}

inline void Owner::display(ostream & out)const
{
	out << endl << "__________________" << endl;
	out << "Name: " << name << endl
		<< "Employee Type: " << classific << endl
		<< "Employee ID: " << ID << endl
		<< "Monthly Salary: " << salary << endl
		<< "Earnings this month: " << monthTotal << endl;
	out << "__________________" << endl;

}

