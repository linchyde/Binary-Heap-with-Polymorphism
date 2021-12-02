#pragma once
#include "Employee.h"

class Janitor : public Employee
{
public:

	
	virtual void outputEarnings();
	virtual void outputJobDescription();

	Janitor(string name, int salary);

};

