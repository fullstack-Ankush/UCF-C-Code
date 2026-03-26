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
        Complex add(Complex);
        Complex subtract(Complex);
        Complex multiply(Complex);
};

Complex Complex::add(Complex c){
    Complex temp;
    temp.setReal(realNum + c.realNum);
    temp.setImaginary(iNum + c.iNum);
    return temp;
}
Complex Complex::subtract(Complex c){
    Complex temp;
    temp.setReal(realNum - c.realNum);
    temp.setImaginary(iNum - c.iNum);
    return temp;
}

Complex Complex::multiply(Complex c){
    Complex temp;
    temp.setReal(realNum * c.realNum);
    temp.setImaginary(iNum * c.iNum);
    return temp;
}

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
        void normalize();
        Time add(Time);
};


Time Time::add(Time t){
    Time temp;
    temp.setTime(t.hr+hr,t.min+min,t.sec + sec);
    return temp;
}
void Time::normalize(){
    if(sec>60){
        min += sec%60;
        sec -=60;
    }
    if (min>60){
        hr += min/60;
        min -=60;
    }
    cout<<"Normalize time is : "<<hr<<":"<<min<<":"<<sec<<endl;
}

class TestResult{
    private:
        int roll_no;
        int right;
        int wrong;
        int net_score;
    public:
        void right_weightage();
        void wrong_weightage();
        void setRollno();
        void setright();
        void setwrong();
        


};








int main(){
    Complex num1;
    Time t1,t2;
    num1.setReal(7);
    num1.setImaginary(-4);
    num1.showComplex();
    t1.setTime(8,57,74);
    t2.setTime(4,12,43);
    Time result = t1.add(t2);
    result.showTime();
    result.normalize();
   

}