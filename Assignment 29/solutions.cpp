#include<iostream>
using namespace std;

// solution of 1 & 2
void printMysirG(){
    cout<<"Hello"<<endl;
    cout<<"MySirG"<<endl;
    
}
// solution of 4
void sum(int a,int b){
    cout<<a+b;
}
// solution of 3
void areaCircle(int r){
    cout<<3.14*r*r;
}
// solution of 5
void volumeofCube(int l,int b,int h){
cout<<"Volume of Cube: "<<l*b*h;
}   

// solution of 6
void averageof3(int a, int b, int c){
    cout<<"Average of 3 numbers: "<<(a+b+c)/3;
}

// solution 7
void squareNum(int n){
    cout<<n*n;
}

// solution of 8
void swap(int *a, int *b) {
    *a = *a + *b; // a now holds the sum
    *b = *a - *b; // (sum - b) gives the original a
    *a = *a - *b; // (sum - new_b) gives the original b
}
// solution 9
void max(int a,int b){
    if(a>b)
        cout<<a<<" is greater ";
    else
        cout<<b<<" is greater";
}

// solution 10
void Inputarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main(){
    // printMysirG();
    // sum(1,2);
    // volumeofCube(1,4,5);
    int a =5,b=6;
    swap(&a,&b);
    cout<<a<<b;

    


}