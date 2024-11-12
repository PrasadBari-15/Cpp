// one class share its properties witth multiple class
#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    string gender;
    public:
    Human(string name,string gender){
        this->name=name;
        this->gender=gender;
    }
};

class Teacher:public Human{
    protected:
    int age;
    string subject;
    public:
    Teacher(string name,string gender,int age,string subject): Human(name,gender)
    {
        this->age=age;
        this->subject=subject;
    }
    void displayTeacher(){
        cout<<name<<" "<<gender<<" "<<age<<" "<<subject<<endl;
    }
};

class Student:public Human{
    protected:
    int standard;
    public:
    Student(string name,string gender,int standard): Human(name,gender){
        this->standard=standard;
    }
    void display(){
        cout<<name<<" "<<gender<<" "<<standard<<endl;
    }
};

int main(){
    Student s1("prasad","male",12);
    s1.display();
    Teacher t1("Digamber","Male",21,"Science");
    t1.displayTeacher();
}
