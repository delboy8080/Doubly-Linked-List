// DoublyLinkedList.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "DList.h"
using namespace std;

void question1();




int main()
{
    question1();

    return 0;
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