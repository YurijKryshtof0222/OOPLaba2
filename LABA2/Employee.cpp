#include "Employee.h"

int Employee::employeesCounter;

int Employee::getId() 
{
	return id;
}

std::string Employee::getFullName() 
{
	return fullName;
}

int Employee::getSalary()
{
	return salary;
}

int Employee::getExp()
{
	return exp;
}

int Employee::getWorkedDaysPerMonth()
{
	return workedDaysPerMonth;
}

int Employee::getWorkingDaysPerMonth()
{
	return workingDaysPerMonth;
}

int Employee::getWage()
{
	if (workedDaysPerMonth > 0)
	{
		return (int) (salary 
			* workingDaysPerMonth 
			/ workedDaysPerMonth 
			* (1 + exp * 0.1));
	}
	return 0;
}

int Employee::getAccrual()
{
	return accrual;
}

int Employee::getMaintenance()
{
	return maintenance;
}

void Employee::setExp(int exp)
{
	if (exp > 0)
	{
		this->exp = exp;
	}
}

void Employee::setSalary(int salary)
{
	if (salary > 0)
	{
		this->salary = salary;
	}
}

void Employee::setWorkedDaysPerMonth(int workedDays)
{
	if (workedDays > 0)
	{
		this->workedDaysPerMonth = workedDays;
	}
}

void Employee::setWorkingDaysPerMonth(int daysPerMonth)
{
	if (daysPerMonth > 0)
	{
		this->workingDaysPerMonth = daysPerMonth;
	}
}

void Employee::setMaintenance(int m) 
{
	if (m > 0)
	{
		this->maintenance = m;
	}
}

void Employee::setAccrual(int a)
{
	if (a > 0)
	{
		this->accrual = a;
	}
}