#pragma once

#include <string>

class Employee
{
private:
	static int employeesCounter;
	int id;
	std::string fullName;

	int salary = 12000;					//����� � ��������� ����� ��������� ������ �����
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