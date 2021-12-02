#include "Employee.h"



Employee::Employee()
{

}

Employee::Employee(string name, int salary)
{
	this->name = name;
	this->salary = salary;
}

void Employee::outputEarnings()
{
	cout << name << " Earns: " << salary << endl;
}

void Employee::outputJobDescription()
{
	cout << name << " Does the following for a job: " << "\n" << endl;
}

string Employee::getName()
{
	return name;
}
