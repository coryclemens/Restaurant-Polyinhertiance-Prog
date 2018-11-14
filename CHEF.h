#pragma once
#include "EMPL.h"
#include <iostream>
using namespace std;
#include <string>


class Chef : public Employee {


	public:
		Chef(string name, char classific, double ID, float salary, string specialDish);
		~Chef();

		virtual void display(ostream & out)const;
		virtual void calcSal(float monthEarn);


	protected:
		string specialDish = " ";
		float monthPercent = .3f;





};


inline Chef::Chef(string name, char classific, double ID, float salary, string specialDish)
	:Employee(name, classific, ID, salary), specialDish(specialDish)
{

}

inline Chef::~Chef()
{
}

inline void Chef::calcSal(float monthEarn)
{
	monthTotal = (monthEarn * monthPercent) + salary;
}

inline void Chef::display(ostream & out)const
{
	out << endl << "__________________" << endl;
	out << "Name: " << name << endl
		<< "Employee Type: " << classific << endl
		<< "Employee ID: " << ID << endl
		<< "Specialty dish: " << specialDish <<endl
		<< "Monthly Salary: " << salary << endl
		<< "Earnings this month: " << monthTotal << endl;
	out << "__________________" << endl;
}