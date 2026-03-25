#include<stdio.h>
#include<iostream>
using namespace std;

class DynamicArray
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        DynamicArray();
        DynamicArray(DynamicArray &);
        DynamicArray& operator=(DynamicArray &);
        void createArray(int);
        void insert(int,int);
        void append(int);
        int getItem(int);
        bool isEmpty();
        bool isFull();
        void del(int );
        void edit(int , int);
        int count();
        int getCapacity();
        ~DynamicArray();
};

DynamicArray::DynamicArray()
{
    capacity = 0;
    lastIndex = -1;
    ptr = NULL;
}

void DynamicArray::createArray(int cap){
    capacity = cap;
    lastIndex = -1;
    ptr = new int[capacity];
}
