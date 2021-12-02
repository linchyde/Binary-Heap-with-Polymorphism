#pragma once
#include "Employee.h"

class Programmer : public Employee
{
public:

	int bugsFixed;
	int bugCreated;

	Programmer(string name, int salary);

	void outputEarnings();
	void outputJobDescription();
};

