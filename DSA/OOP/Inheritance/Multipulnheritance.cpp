// a child class derives properties of thwo or more parent class

#include<iostream>
using namespace std;
class Human
{
   protected:
    string name;
    public:
    void show(){
        cout<<"My name is : "<<name<<endl;
    }
};

class sports
{
    protected:
    string game;
    public:
    sports(){
        cout<<"this is an Constuctor"<<endl;
    }

    void get(){
        cout<<"My favourate sports is : "<<game<<endl;
    }
};

class student:public Human, public sports
{
    protected:
    int age;
    public:
    student(string name,string game,int age){
        this->name=name;
        this->game=game;
        this->age=age;
    }
    void detail(){
        show();
        get();
        cout<<"my age is : "<<age<<endl;
    }
};

int main(){
    student S1("Prasad","Football",22);
    S1.detail();
   
}
