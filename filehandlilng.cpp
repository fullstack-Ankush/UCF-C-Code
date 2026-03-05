#include<iostream>
#include<fstream>
using namespace std;

void writing(){
    ofstream fout;
    fout.open("file.txt");
    fout<<"Hello World!"<<endl;
    fout.close();
}

int main(){
    writing();
    return 0;
}