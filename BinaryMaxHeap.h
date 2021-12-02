#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include "Employee.h"

class BinaryMaxHeap
{
public:
	vector<Employee*> heap;
	int leftChildIndex(int parent);
	int rightChildIndex(int parent);
	int parentIndex(int child);

	void heapifyUp(int index);
	void heapifyDown(int index);

	void Insert(Employee* element);
	void DeleteMin();
	Employee* ExtractMax();
	void showHeap();
	int Size();
};
