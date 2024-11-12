#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    public:
    void nav(){
        cout<<"Hello my name is:"<<name<<endl;
    }
};

class Employee:public Person
{
    protected:
    int salary;
    public:
    void sal(){
        cout<<"my salary is : "<<endl;
    }
};

class Manager:public Employee{
    protected:
    string department;

    public:
    Manager(string name , string department,int salary){
        this->name = name;
        this->department=department;
        this->salary=salary;

    }
    void display(){
        cout<<"My Department is: "<<department;
    }
};

int main(){
    Manager M1("Prasad","Marketing",100000);
    M1.display();
}