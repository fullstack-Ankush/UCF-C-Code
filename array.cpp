#include<iostream>

using namespace std;


class Array{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        void CreateArray( int num);
        void insert(int,int );
        void append(int);
        int getindex(int);
        bool isEmpty();
        bool isFull();
        void del(int );
        void edit(int,int);
        int count();
        int getCapacity();







};
int main(){

}