// Abstraction :- Abstraction is use to display only essential information and hiding details.

#include<iostream>
using namespace std;

class Student{
    string name;
    int roll_no, age;

    public:
    void set(string n){
        name=n;
    }
    void sett(int roll){
        roll_no=roll;
    }
    void se(int a){
        if(a>0){                        // all this logical information part comes under abstration
            age=a;
        }
        else cout<<"Invalid age"<<endl;
    }
    void get(){
        cout<<name<<" "<<roll_no<<endl;
    }
    void g(){
        cout<<age;
    }
};

int main(){
    Student s1;
    s1.set("prasad");
    s1.sett(10);
    s1.se(0 );
    s1.get();
    s1.g();
    
}
