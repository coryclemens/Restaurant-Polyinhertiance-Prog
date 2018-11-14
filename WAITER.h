#pragma once
#include "EMPL.h"
#include <iostream>
using namespace std;
#include <string>


class Waiter : public Employee
{

	public:
		Waiter(string name, char classific, double ID, float salary, int yearsService);
		~Waiter();

		virtual void display(ostream & out)const;
		virtual void calcSal(float monthEarn);

	private:
		int yearsService = 0;


};


inline Waiter::Waiter(string name, char classific, double ID, float salary, int yearsService)
	:Employee(name, classific, ID, salary), yearsService(yearsService)
{

}


inline Waiter::~Waiter()
{

}

inline void Waiter::display(ostream & out)const {

	out << endl << "__________________" << endl;
	out << "Name: " << name << endl
		<< "Employee Type: " << classific << endl
		<< "Employee ID: " << ID << endl
		<< "Years of Service: " << yearsService << endl
		<< "Monthly Salary: " << salary << endl
		<< "Earnings this month: " << monthTotal << endl;
	out << "__________________" << endl;

}

inline void Waiter::calcSal(float monthEarn) {

	float tips = 0;
	cout << "Enter tip amount for: " << name << endl;
	cin >> tips;
	monthTotal = tips + salary;

}