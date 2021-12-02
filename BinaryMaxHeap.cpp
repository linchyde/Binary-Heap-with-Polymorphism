
#include "BinaryMaxHeap.h"

int BinaryMaxHeap::leftChildIndex(int parent)
{
    int leftIndex = 2 * parent + 1;
    if (leftIndex < heap.size())
        return leftIndex;
    else
        return -1;
}

int BinaryMaxHeap::rightChildIndex(int parent)
{
    int rightIndex = 2 * parent + 2;
    if (rightIndex < heap.size())
        return rightIndex;
    else
        return -1;
}

int BinaryMaxHeap::parentIndex(int child)
{
    int parent = (child - 1) / 2;
    if (child == 0)
        return -1;
    else
        return parent;
}

void BinaryMaxHeap::heapifyUp(int index)
{
    //IF indes is not the root(top of the tree)
   //AND parentIndex wis within heap bounds ( not negative)
   //AND check this nodes slary against the parent node salary is the current less than the parent
    if (index >= 0 && parentIndex(index) >= 0 && heap[index]->salary > heap[parentIndex(index)]->salary)  //swapped the < to > last one
    {
        //If so then swap the current node with the parent
        Employee* temp = heap[index];
        heap[index] = heap[parentIndex(index)];
        heap[parentIndex(index)] = temp;
        //since we have swapped lets run heapifyUp again recursively from here
        heapifyUp(parentIndex(index));
    }
}

void BinaryMaxHeap::heapifyDown(int index)
{
    //get the left and right child indexes(indexes are just the position in the array)
    int childL = leftChildIndex(index);
    int childR = rightChildIndex(index);

    //child variable representing the path we will compare down
    int childIndex = childL;
    //IF childL is not -1 AND childR is not -1
    //AND right childs salary is less than lefts
    if (childL >= 0 && childR >= 0 && heap[childR]->salary > heap[childL]->salary)  //swapped the < to >
    {
        //make right child index the focus instead of left
        childIndex = childR;
    }

    //IF childIndex is not the root node and is not -1
    //AND current nodes bigger than child nodes
    if (childIndex > 0 && heap[index]->salary < heap[childIndex]->salary)
    {
        //we should swap current with child because we want the smallest at the top
        Employee* temp = heap[index];
        heap[index] = heap[childIndex];
        heap[childIndex] = temp;
        //recurse further down on that childindex
        heapifyDown(childIndex);
    }
}

void BinaryMaxHeap::Insert(Employee* element)
{
    heap.push_back(element);
    heapifyUp(heap.size() - 1);
}

void BinaryMaxHeap::DeleteMin()
{
    //cant delete if the heap is empty
    if (heap.size() == 0)
    {
        cout << "Heap Empty!" << endl;
        return;
    }
    //copy value in the last element into the root
    heap[0] = heap[heap.size() - 1];
    //delete the last element
    heap.pop_back();
    //then heapifydown starting from the root (index 0)
    heapifyDown(0);
    cout << "Root Employee Deleted " << endl;
}

Employee* BinaryMaxHeap::ExtractMax()
{
    //heap is empty no players to return
    if (heap.size() == 0)
        return NULL;
    else
    {
        //return &(heap.front());
        Employee* p = heap.front(); //returning the memory address using &
        return p;
    }
}

void BinaryMaxHeap::showHeap()
{
    cout << "Heap -->";
    for (Employee* p : heap)
    {
        cout << "[" << p->salary << " " << p->name << "] ";
    }
    cout << endl;
}

int BinaryMaxHeap::Size()
{
    return heap.size();
}
