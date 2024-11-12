#include<iostream>
using namespace std;
class student
{
    public:
    void print(){
        cout<<"Hello I'M Student"<<endl;
    }
};

class male{
    public:
    male(){
        cout<<"I'M Male"<<endl;
    }
};

class Female{
    public:
    Female(){
        cout<<"I'M Female"<<endl;
    }
};

class Boy:public student, public male{
    public:
    Boy(){
        cout<<"I'm a boy"<<endl;
    }

};

class Girl:public student,public Female{
    public:
    Girl(){
        cout<<"I'M a Girl"<<endl;
    }
};

int main(){
    Boy B1;
    student s1;
    s1.print(); 
    Girl G1;
    

}