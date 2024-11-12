#include<iostream>
using namespace std;
class student{
    public:
    string name;
    string roll_no;
    string branch;
    int year;
    double aggrigate; 

    int detail(){
        cout<<name<<" "<<roll_no<<" "<<branch<<" "<<year;
    }

};

int main(){
    student s1;
    s1.name="prasad";
    s1.roll_no="C401";
    s1.branch="CSE";
    s1.year = 4;
    s1.detail();

}

