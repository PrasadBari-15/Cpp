#include<iostream>
using namespace std;

class teacher{
    private:
    double salary;

    public:
    string name;
    string department;
    string subject;
    
    //setter function
    void setsalary(double n){
        salary=n;
    }
    //getter function
    int getsalary(){
       return salary;
    }
};

int main(){
    int n;
    teacher t1;
    t1.name="Prasad";
    t1.department="CSE";
    t1.subject="C++";
    
    t1.setsalary(50000);
    cout<<t1.getsalary()<<endl;
    cout<<t1.name;
    
}