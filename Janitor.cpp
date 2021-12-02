#include "Janitor.h"

Janitor::Janitor(string name, int salary)
{
	this->name = name;
	this->salary = salary;
}

void Janitor::outputEarnings()
{
	cout << name << "The Janitor earns: $ " << salary << " per year. " << endl;
}

void Janitor::outputJobDescription()
{
	cout << name << " Job Description: \n" << endl;
	cout << " Cleans and sweeps stuff and has a creepy closet " << "\n" << endl;
}
