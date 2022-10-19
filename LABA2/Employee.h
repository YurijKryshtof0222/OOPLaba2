#pragma once

#include <string>

class Employee
{
private:
	static int employeesCounter;
	int id;
	std::string fullName;

	int salary = 12000;					//оклад Ч щом≥с€чний розм≥р погодинноњ оплати прац≥
	int exp = 2;						//стаж роботи
	int workedDaysPerMonth = 23;		//к≥льк≥сть в≥дпрацьованих дн≥в
	int workingDaysPerMonth = 20;		//к≥льк≥сть робочих дн≥в у м≥с€ц≥
	int accrual = 600;					//нарахуванн€(надбавка, прем≥€ тощо)
	int maintenance = 500;				//утриманн€
	
public:
	int getId();
	std::string getFullName();
	int getWage();						//обраховуЇ нарахуванн€

	int getSalary();
	int getExp();
	int getWorkedDays();
	int getDaysPerMonth();
	int getAccrual();
	int getMaintenance();

	void setSalary(int salary);
	void setExp(int exp);
	void setWorkedDays(int workedDays);
	void setDaysPerMonth(int daysPerMonth);
	void setMaintenance(int maintenance);

	Employee
	(
		std::string fullName
	)
	{
		this->id = employeesCounter++;
		this->fullName = fullName;
	}

	Employee
	(
		std::string fullName,
		int salary,
		int exp,
		int workedDays,
		int daysPerMonth,
		int maintance
	) : Employee(fullName)
	{
		setSalary(salary);
		setExp(exp);
		setWorkedDays(workedDays);
		setDaysPerMonth(daysPerMonth);
		setMaintenance(maintance);
	}

};