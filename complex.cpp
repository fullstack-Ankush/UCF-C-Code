#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        void SetData(int a, int b);
        void showData();

};
void Complex::SetData(int x, int y){
    a = x;
    b = y;
}
void Complex::showData(){
    cout<<"real value : "<<a<<" imaginary value : "<<b<<endl;
}

int main(){
    Complex c1,c2;
    c1.SetData(4,6);
    c1.showData();

    return 0;
}