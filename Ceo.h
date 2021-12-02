#pragma once
#include "Employee.h"

class Ceo : public Employee
{
public:

	int annualBonus;

	Ceo(string name, int salary, int annualBonus);

	void outputEarnings();
	void outputJobDescription();
};

