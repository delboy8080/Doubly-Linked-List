// DoublyLinkedList.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <random>
#include <time.h>
#include "DList.h"
using namespace std;

void question1();
void question2();



int main()
{
    question2();

    return 0;
}
void question2()
{
    srand(time(nullptr));
    DList<int> nums;
    for (int i = 0; i < 10; i++)
    {
        int num = rand() % 100;
        nums.append(num);
    }
    cout << "[";
    for (DListIterator<int> iter = nums.getIterator(); iter.isValid(); iter.advance())
    {
        cout << iter.item() << ", ";
    }
    cout << "]"<<endl;

    // remove uneven numbers
    for (DListIterator<int> iter = nums.getIterator(); iter.isValid(); )
    {
        if (iter.item() % 2 == 1)
        {
            iter = nums.remove(iter);
           
        }
        else
        {
            iter.advance();
        }
    }

    cout << "[";
    for (DListIterator<int> iter = nums.getIterator(); iter.isValid(); iter.advance())
    {
        cout << iter.item() << ", ";
    }
    cout << "]";
}
void question1()
{
    DList<int> lst;
    int num;
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter a number" << endl;
        cin >> num;
        lst.append(num);
    }
    DListIterator<int> iter = lst.getIterator();
    iter.end();
    while (iter.isValid())
    {
        cout << iter.item()<<", ";
        iter.previous();
    }
}