#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
	string name;
	int salary;	

	virtual void outputEarnings();
	virtual void outputJobDescription();

	Employee();
	Employee(string name, int salary);

	string getName();

};

