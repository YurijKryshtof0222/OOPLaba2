#pragma once

#include "Employee.h"
#include <vector>
#include <string>

class Wage
{
private:
	std::vector<Employee> employees;
	void show			(Employee employee);
	void printException (std::string employeeName);
public:
	void add			(Employee employee);
	void set			(std::string oldEmployeeName, Employee newEmployee);
	void remove			(std::string employeeName);
	int  getProfit		(std::string employeeName);
	void findByName		(std::string employee);
	void findByNameAndSetPriorities	(std::string employee);
	void showAll();

	~Wage();
};