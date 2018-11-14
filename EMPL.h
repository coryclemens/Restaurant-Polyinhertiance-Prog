#pragma once
#include <iostream>
using namespace std;
#include <string>

class Employee {

	public:
		Employee(string name, char classific, double ID, float salary);
		~Employee();

		virtual void calcSal(float monthEarn) = 0;
		virtual void display(ostream & out)const;

	protected:
		float salary = 0;
		string name = " ";
		double ID = 0;
		char classific = ' ';
		float monthTotal = 0;
	




};



inline Employee::Employee(string name, char classific, double ID, float salary)
	:name(name), classific(classific), ID(ID), salary(salary)
{


}

inline Employee::~Employee()
{
}

inline void Employee::calcSal(float monthEarn)
{
	return;
}

inline void Employee::display(ostream & out)const {

	out << name << endl << classific << endl << ID << salary << endl;


}
