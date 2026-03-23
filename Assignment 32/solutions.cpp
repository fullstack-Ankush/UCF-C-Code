#include<iostream>
using namespace std;

class Complex{
    private:
        int realNum;
        int iNum;
    public:
        void setReal(int n){
            realNum=n;
        }
        void setImaginary(int n){
            iNum=n;
        }
        void showComplex(){
            cout<<realNum<<"+"<<iNum<<"i"<<endl;
        }
};

class Time{
    private:
        int hr = 0;
        int min = 0;
        int sec = 0;
    public:
        void setTime(int h,int m,int s){
            hr= h;
            min=m;
            sec=s;
        }
        void showTime(){
            cout<<hr<<" Hr "<<min<<" Min "<<sec<<" Sec"<<endl;
        }
};






int main(){
    Complex num1;
    Time t1;
    num1.setReal(7);
    num1.setImaginary(-4);
    num1.showComplex();
    t1.setTime(8,12,44);
    t1.showTime();

}