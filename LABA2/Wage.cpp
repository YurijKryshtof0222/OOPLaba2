#include <iostream>
#include <iomanip>
#include <string>

#include "Wage.h"
#include "util.cpp"

void Wage::add(Employee employee) 
{
	employees.push_back(employee);
}

void Wage::set(std::string oldEmployeeName, Employee newEmployee)
{
	for (auto iter = employees.begin(); iter != employees.end(); iter++)
	{
		auto& iterEmpl = *iter;
		if (iterEmpl.getFullName() == oldEmployeeName)
		{
			employees[iter - employees.begin()] = newEmployee;
			break;
		}
	}
	printException(oldEmployeeName);

}

void Wage::remove(std::string employeeName)
{
	for (auto iter = employees.begin(); iter != employees.end(); iter++)
	{
		auto& iterEmpl = *iter;
		if (iterEmpl.getFullName() == employeeName)
		{
			employees.erase(iter);
			return;
		}
	}
	printException(employeeName);

}

int Wage::getProfit(std::string employeeName)
{
	try {
		for (auto iter = employees.begin(); iter != employees.end(); iter++)
		{
			auto& tempEmployee = *iter;
			if (tempEmployee.getFullName() == employeeName)
			{
				return tempEmployee.getWage()
					+ tempEmployee.getAccrual()
					- tempEmployee.getMaintenance();
			}
		}
		throw(-1);
	} 
	catch (int) 
	{
		printException();
	}

}

void Wage::show(Employee employee)
{
	using namespace std;
	
	util::printContour();
	cout << "ID: "						<< employee.getId() << endl;
	cout << employee.getFullName()		<< endl;
	cout << "Salary: "					<< employee.getSalary() << endl;
	cout << "Work experience: "			<< employee.getExp() << endl;
	cout << "Worked days per month: "	<< employee.getWorkedDays() << endl;
	cout << "Working days per month: "	<< employee.getDaysPerMonth() << endl;
	cout << "Maintaince: "				<< employee.getMaintenance() << endl;
	cout << "Accrual: "					<< employee.getAccrual() << endl;
	cout << "Wage: "					<< employee.getWage() << endl;
	cout << "Profit: "					<< getProfit(employee.getFullName()) << endl;
	util::printContour();
}

void Wage::show(std::string employeeName)
{
	for (auto iter = employees.begin(); iter != employees.end(); iter++)
	{
		auto& tempEmployee = *iter;
		if (tempEmployee.getFullName() == employeeName)
		{
			show(tempEmployee);
			return;
		}
	}
	printException(employeeName);
	
}

void Wage::showAll() 
{
	if (employees.size() == 0)
	{
		std::cout << "The list of employees is empty\n";
		return;
	}

	for (auto iter = employees.begin(); iter != employees.end(); iter++)
	{
		auto& employee = *iter;
		show(employee);
	}

}

void Wage::printException(std::string employeeName)
{
	std::cout << "Employee " << employeeName << " is not found!\n";
}

Wage::~Wage()
{
	employees.clear();
}