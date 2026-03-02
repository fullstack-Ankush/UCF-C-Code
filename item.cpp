#include<iostream>
using namespace std;

class Item{
    private:

        int a=0;
        int b=0;
    public:
        void setData(int x,int y){
            a=x;
            b = y;
        }
        void showData();

        Item greater(Item i);
};

void Item::showData(){
    cout<<a<<","<<b;
}
Item Item::greater(Item i){
    if(a+b>i.a+i.b){
        return *this;
    }
    else{
        return i;

    }
}

int main(){
    Item i1,i2;
    i1.setData(3,5);
    i2.setData(4,8);
    Item i3 = i1.greater(i2);
    i3.showData();
    // i1.showData();

}