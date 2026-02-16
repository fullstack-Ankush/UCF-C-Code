#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

struct book{
    int bookID;
    char title[20];
    float price;
    
};
struct book inputData();
void Displaybook(struct book b);





struct book inputData(){
    struct book b;
    cout<<"Enter the bookID , Title and Price"<<endl;
    cin>>b.bookID;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    return b;


}

void Displaybook(struct book b){
    cout<<b.bookID<<" "<<b.title<<" "<<b.price<<endl;

}

int main(){
    struct book b1 = {1,"Atomic Habit",799.00},b2;
    b2.bookID = 1;
    strcpy(b2.title ,"ProgramminG");
    b2.price = 1099.00;

    
    struct book b3;
    b3 = inputData();
    Displaybook(b3);
    
} 