#include "Programmer.h"

Programmer::Programmer(string name, int salary)
{
	this->name = name;
	this->salary = salary;
}

void Programmer::outputEarnings()
{
	cout << name << " The Programmer earns: $" << salary << " per year. " << endl;	
}

void Programmer::outputJobDescription()
{
	cout << name << " Job Description: \n" << endl;
	cout << " Viscious code monkey, tiresome long ass days in the dungoen of the establishment tapping out one's and zero's for hours. \n" << endl;
}
