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






int main(){
    Complex num1;
    num1.setReal(7);
    num1.setImaginary(-4);
    num1.showComplex();

}