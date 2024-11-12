//Inheritance:- Property of Class which is derived from another class is known as Inheritnce
/* Acess modifiers:
Child-> Public : Parent -> Public = acess anywhere
Child-> Public : Parent -> Protected || vice versa = Treated as a protected in derived class and only acess within class.
Child-> Public : Parent -> Private || vice versa = Treated as a private in derived class and does not acessable.
Child-> Protected : Parent -> Private || vice versa = Treated as Private
*/

#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    string Gender;
    int age;

};

class Student : public Human{
    public:
    string email;
    int roll;

    //Here Human class attributes derived as a protected
    // protected:
    // string name;
    // string Gender;
    // int age;

    public:
    void setdata(string name,string Gender,int age,string email,int roll){
        this->name=name;
        this->Gender=Gender;
        this->age=age;
        this->email=email;
        this->roll=roll;
    }
    void getdata(){
        cout<<name<<" "<<Gender<<" "<<age<<" "<<email<<" "<<roll;
    }
};

int main(){
    Student S1;
    S1.setdata("Prasad","Male",21,"prasad@123",101);
    S1.getdata();
}