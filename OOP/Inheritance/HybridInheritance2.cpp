#include<iostream>
using namespace std;
class student
{
    protected:
    string StudentID;
    public:
    student(string StudentID){
        this->StudentID=StudentID;
    }
};

class Male
{
    protected:
    string name;
    public:
    Male(string name){
        this->name=name;
    }
};

class Female
{
    protected:
    string name;
    public:
    Female(string name){
        this->name=name;
    }
};

class Boy:public student,public Male
{
    protected:
    int age;
    public:
    Boy(string StudentID,string name,int age):student(StudentID),Male(name)
    {
        this->age=age;
    }
    void displayBoy(){
        cout<<StudentID<<" "<<name<<" "<<age<<endl;
    }
};

class Girl:public student,public Female
{
    protected:
    int age;
    public:
    Girl(string StudentID,string name,int age):student(StudentID),Female(name){
        this->age=age;
    }

    void displayGirl(){
        cout<<StudentID<<" "<<name<<" "<<age<<endl;
    }
    
};

int main(){
    Boy B1("B101","Prasad",10);
    B1.displayBoy();
    Girl G1("G101","Bhumi",20);
    G1.displayGirl();
}