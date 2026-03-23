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

class Circle{

    float radius;
    public:
        void setRadius(float  r){
            radius = r;
        }
        void getRadius(){
            cout<<radius;
        }
        float getPerimeter(){
            return 2*3.14*radius;
        }
        float getArea(){
            return 3.14*radius*radius;
        }

};






int main(){
    Complex num1;
    Time t1;
    Circle c1;
    num1.setReal(7);
    num1.setImaginary(-4);
    num1.showComplex();
    t1.setTime(8,12,44);
    t1.showTime();
    c1.setRadius(4.1);
    float r1 = c1.getArea();
    cout<<r1<<endl;
    float r2 = c1.getPerimeter();
    cout<<r2<<endl;

}