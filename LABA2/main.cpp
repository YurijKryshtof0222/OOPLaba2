#include <iostream>
#include <iomanip>

#include "Employee.h"
#include "Wage.h"
#include "util.h"

using namespace std;
using util::printContour;

void showMenu();
string inputFullName();
void addEmployee();
void removeEmployee();
void showMenu();

Wage employeesWageList = Wage();

int main()
{
	cout << setfill('-') << setw(30) << "Accountant Demo" << setw(15) << "" << endl;
	util::printContour();
	showMenu();
}

void showMenu()
{
	bool state = true;
	while (state)
	{
		int action;

		cout << "	Choose your action" << endl;
		cout << "1.)Add employee" << endl;
		cout << "2.)Remove employee" << endl;
		cout << "3.)Show employee info by fullname" << endl;
		cout << "4.)Show all employees" << endl;
		cout << "5.)Exit" << endl;

		cout << "Your action: ";
		cin >> action;
		cout << endl;

		switch (action)
		{
		case (1):
			cout << "\tAdd employee" << endl;
			printContour();
			addEmployee();
			printContour();
			break;
		case (2):
			cout << "\tRemove employee" << endl;
			printContour();
			removeEmployee();
			printContour();
			break;
		case (3):
			cout << "\tShow employee info by fullname" << endl;
			printContour();
			showEmployee();
			printContour();
			break;
		case (4):
			cout << "\tShow all employees" << endl;
			printContour();
			employeesWageList.showAll();
			printContour();
			break;
		case (5):
			cout << "\tGoodbye!" << endl;
			s = false;
			printContour();
			break;
		default:
			cout << "Incorrect command!" << endl;
			printContour();
			break;
		}

	}

}

string inputFullName()
{
	string fullname;

	cin.ignore();
	cout << "Enter employee's fullname: ";
	getline(cin, fullname);
	while (fullname.empty())
	{
		cout << "Fullname must be non-empty!" << endl;
		cout << "Enter employee's fullname: " << endl;
		getline(cin, fullname);
	}
	return fullname;
}

void addEmployee() 
{
	string fullname = inputFullName();
	cout << "Set other values by default?(y/n) :";
	char ans;
	cin >> ans;
	if (ans == 'y') 
	{
		employeesWageList.add(Employee(fullname));
	} 
	else
	{
		int salary, exp, workedDays, daysPerMonth, maintenance;
		cout << "Enter salary: ";
		cin >> salary;
		cout << "Enter work expirience: ";
		cin >> exp;
		cout << "Enter worked days: ";
		cin >> workedDays;
		cout << "Enter working days per month: ";
		cin >> daysPerMonth;
		cout << "Enter maintenance: ";
		cin >> maintenance;
		
		employeesWageList.add(
			Employee(fullname, salary, exp, workedDays, daysPerMonth, maintenance)
		);
	}

}

void removeEmployee()
{
	string fullname;

	cin.ignore();
	cout << "Enter employee's fullname: ";
	getline(cin, fullname);

	employeesWageList.remove(fullname);
}

void showEmployee()
{
	string fullname;

	cin.ignore();
	cout << "Enter employee's fullname: ";
	getline(cin, fullname);

	employeesWageList.show(fullname);
}

void setProporties()
{
	bool state = true;
	cout << "Would you change some proporties?(y/n) : ";
	char ans;
	cin >> ans;
	if (ans == 'y')
	{

	}

}

