#include "EMPL.h"
#include "OWNER.h"
#include "CHEF.h"
#include "WAITER.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define SIZE 20
int main()
{
	Employee *emp[SIZE];
	int owners = 0;
	int chefs = 0;
	int waiers = 0;
	int employees = 0;
	bool loopChoice = 0;
	int menuChoice = 0;
	int firstMenu = 0;
	
	cout << "Welcome to the restaurant database." << endl;
	cout << "1) Create new custom database" << endl;
	cout << "2) Test program with driver specific for Program 4" << endl;
	cin >> firstMenu;
	
	switch (firstMenu) {

	case 1:
		while (!loopChoice)
		{

			cout << endl << "What would you like to do?" << endl << endl;
			cout << "1: Add Owner(s)" << endl
				<< "2: Add Chef(s)" << endl
				<< "3: Add Waiter(s)" << endl
				<< "4: Calculate all employee salaries" << endl
				<< "5: Exit application" << endl << endl;
			cin >> menuChoice;

			switch (menuChoice) {

			case 1:
				cout << endl << "How  many owners would you like to add?" << endl;
				cin >> owners;
				for (int i = 0; i < owners; ++i) {
					string name;
					char classific;
					double ID;
					float salary;
					cout << "Please enter owner's name: " << endl;
					cin >> name;
					cout << "Please enter owner's classification(O, C, W): " << endl;
					cin >> classific;
					cout << "Please enter owner's ID: " << endl;
					cin >> ID;
					cout << "Please enter owner's Salary: " << endl;
					cin >> salary;
					emp[employees] = new Owner(name, classific, ID, salary);
					++employees;


				}
				break;
			case 2:
				cout << endl << "How many chefs would you like to add?" << endl;
				cin >> chefs;
				for (int i = 0; i < chefs; ++i) {
					string name;
					char classific;
					double ID;
					float salary;
					string dish;
					cout << "Please enter chef's name: " << endl;
					cin >> name;
					cout << "Please enter chef's classification(O, C, W): " << endl;
					cin >> classific;
					cout << "Please enter chef's ID: " << endl;
					cin >> ID;
					cout << "Please enter chef's Salary: " << endl;
					cin >> salary;
					cout << "Please enter chef's special dish: " << endl;
					cin >> dish;
					emp[employees] = new Chef(name, classific, ID, salary, dish);

					++employees;



				}
				break;

			case 3:
				cout << endl << "How many waiters would you like to add?" << endl;
				cin >> chefs;
				for (int i = 0; i < chefs; ++i) {
					string name;
					char classific;
					double ID;
					float salary;
					int years;
					cout << "Please enter waiter's name: " << endl;
					cin >> name;
					cout << "Please enter waiter's classification(O, C, W): " << endl;
					cin >> classific;
					cout << "Please enter waiter's ID: " << endl;
					cin >> ID;
					cout << "Please enter waiter's Salary: " << endl;
					cin >> salary;
					cout << "Please enter waiter's years of service: " << endl;
					cin >> years;
					emp[employees] = new Waiter(name, classific, ID, salary, years);

					++employees;

				}
				break;

			case 4:
				cout << "Please enter profit (or loss) for month" << endl;
				float month;
				cin >> month;

				for (int i = 0; i < employees; ++i) {
					emp[i]->calcSal(month);

				}

				for (int i = 0; i < employees; ++i) {
					emp[i]->display(cout);

				}
				break;


			case 5:
				loopChoice = 1;
				break;
			}
			break;





		}

	case 2:
		emp[0] = new Owner("Cory", 'O', 82015, 15000);
		emp[1] = new Chef("Todd", 'C', 6378, 10000, "italian");
		emp[2] = new Chef("Carl", 'C', 9127, 10000, "mexican");
		emp[3] = new Waiter("Cheryl", 'W', 81726, 3000, 4);
		emp[4] = new Waiter("Max", 'W', 87863, 3000, 6);
		emp[5] = new Waiter("Sarah", 'W', 67323, 3000, 1);
		
		float profit;
		int hwTest = 0;
		while (!hwTest) {
			cout << "Roster created. Enter profit for month: " << endl;
			cin >> profit;

			for (int i = 0; i < 6; ++i) {
				emp[i]->calcSal(profit);


				
			}
			for (int i = 0; i < 6; ++i) {
				


				emp[i]->display(cout);
			}

			cout << "0) Enter another month" << endl << "1) Exit" << endl;
			cin >> hwTest;
		}

	}
	return 1;
}