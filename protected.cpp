#include<iostream>
#include<string.h>

using namespace std;

class Person{
    private:
        char name[20];
        int age;
    protected:
        void setAge(int a){
            age = a;
        }
        void setName(char n[]){
            strcpy(name,n);
        }
    public:
        void getAge(){
            cout<<"Age: "<<age<<endl;
        }
        char *getName(){
            return name;
        }
        

};

class Employee:public Person{
    private:
        float salary;
    public:
        void setEmployee(int a ,char n[],float s){
            setAge(a);
            setName(n);
            salary = s;
        }

};

int main(){
    Person p1;
}