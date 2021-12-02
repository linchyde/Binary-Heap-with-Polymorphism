#include "Ceo.h"

Ceo::Ceo(string name, int salary, int annualBonus)
{
	this->name = name;
	this->salary = salary;
	this->annualBonus = annualBonus;
}



void Ceo::outputEarnings()
{
	cout << name << " The CEO earns: $" << salary << " per year. " << endl;
	cout << name << " also gets an annual bonus of: $ " << annualBonus << endl;
	cout << "He totals: $ " << salary + annualBonus << " Per Year" << endl;
}

void Ceo::outputJobDescription()
{
	cout << name << " Job Description: \n" << endl;
	cout << " Is the big daddy all up in here, and dont you forget it, he has multiple wives for a reason! \n" << endl;
}
