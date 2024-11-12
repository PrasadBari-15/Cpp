#include<iostream>
using namespace std;

class Human
{
    protected:
    string name,Gender;

    public:
    Human(string name,string Gender)
    {
        this->name=name;
        this->Gender=Gender;
    }

};

class Student:public Human
{
    protected:
    int age,roll;

    public:
    Student(string name,string Gender,int age,int roll):Human(name,Gender)
    {
        this->age=age;
        this->roll=roll;
    }

    void display()
    {
        cout<<name<<" "<<Gender<<" "<<age<<" "<<roll<<endl;
    }

};

int main(){
    Student S1("Prasad","Male",21,201);
    S1.display();
}