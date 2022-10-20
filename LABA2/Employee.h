#pragma once

#include <string>

class Employee
{
private:
	static int employeesCounter;
	int id;
	std::string fullName;

	int salary;					//����� � ��������� ����� ��������� ������ �����
	int exp = 2;						//���� ������
	int workedDaysPerMonth = 23;		//������� ������������� ���
	int workingDaysPerMonth = 20;		//������� ������� ��� � �����
	int accrual = 600;					//�����������(��������, ����� ����)
	int maintenance = 500;				//���������
	
public:
	int getId();
	std::string getFullName();
	int getWage();						//�������� �����������

	int getSalary();
	int getExp();
	int getWorkedDaysPerMonth();
	int getWorkingDaysPerMonth();
	int getAccrual();
	int getMaintenance();

	void setSalary(int salary);
	void setExp(int exp);
	void setWorkedDaysPerMonth(int workedDays);
	void setWorkingDaysPerMonth(int daysPerMonth);
	void setMaintenance(int maintenance);
	void setAccrual(int accrual);

	Employee
	(
		std::string fullName
	)
	{
		this->id = employeesCounter++;
		this->fullName = fullName;
		this->salary = 12000;
	}

	Employee
	(
		std::string fullName,
		int salary,
		int exp,
		int workedDays,
		int daysPerMonth,
		int maintance,
		int accrual
	) : Employee(fullName)
	{
		setSalary(salary);
		setExp(exp);
		setWorkedDaysPerMonth(workedDays);
		setWorkingDaysPerMonth(daysPerMonth);
		setMaintenance(maintance);
		setAccrual(accrual);
	}

};