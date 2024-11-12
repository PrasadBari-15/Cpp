#include<iostream>
using namespace std;

class Teacher{
    public:
    string name;
    string department;
    string subject;
    int salary;
    public:
    //constuctor-->parameterize & unparameterize
    Teacher(string n, string dep,string sub ,int sal){
        name=n;
        department=dep;
        subject=sub;
        salary=sal;
    }

    void getinfo(){
        cout<<name<<" "<<department<<" "<<subject<<" "<<salary<<endl;
    }
};

int main(){
    Teacher t1("prasad","cse","c++",50000);
    Teacher t2("Ashutosh","Mech","SOM",30000);
    t1.getinfo();
    t2.getinfo();

    return 0;
}