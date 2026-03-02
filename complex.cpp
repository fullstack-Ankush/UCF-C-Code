#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        void SetData(int a, int b);
        void showData();
        Complex add(Complex c);

};
void Complex::SetData(int x, int y){
    a = x;
    b = y;
}
void Complex::showData(){
    cout<<"real value : "<<a<<" imaginary value : "<<b<<endl;
}

Complex Complex::add(Complex c){
    Complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return temp;

}

int main(){
    Complex c1,c2,c3;

    c1.SetData(4,6);
    c2.SetData(5,6);
    c3 = c1.add(c2);
    c3.showData();

    return 0;
}