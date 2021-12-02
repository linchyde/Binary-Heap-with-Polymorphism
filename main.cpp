#include <iostream>
#include <string>
#include "Janitor.h"
#include "Ceo.h"
#include "Programmer.h"
#include "BinaryMaxHeap.h"

using namespace std;

void main()
{
	BinaryMaxHeap EmployeeSal;
	EmployeeSal.Insert(new Janitor("gordon", 30000));
	EmployeeSal.Insert(new Janitor("gonzo", 34000));
	EmployeeSal.Insert(new Janitor("Timbo", 28000));
	EmployeeSal.Insert(new Ceo("Rob", 250000, 50000));
	EmployeeSal.Insert(new Programmer("Doohicky", 500));
	EmployeeSal.Insert(new Programmer("Burger", 120000));
	EmployeeSal.Insert(new Programmer("Dennis", 103000));
	EmployeeSal.Insert(new Employee("Ronald", 22000));
	EmployeeSal.Insert(new Employee("Regan", 54000));
	EmployeeSal.Insert(new Employee("Dilpickle", 46000));

	EmployeeSal.showHeap();
	cout << "Heap size is: " << EmployeeSal.Size() << endl;

	
	
	while (EmployeeSal.heap.size() > 0)
	{
		Employee* persons = EmployeeSal.ExtractMax();
		cout << "Top Paid Employee is: " << (*persons).name << " ";
		persons->outputEarnings();
		persons->outputJobDescription();
		EmployeeSal.DeleteMin();
		
	}

	
		


	system("pause");

}