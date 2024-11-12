#include<iostream>
using namespace std;

class Student{
    private:
    int percent;
    string gmail;

    public:
    string name;
    int roll;
    string branch;
    //setter
    void setpercent(int m){
        
    percent=m;
    }
    void setgmail(string g){
        if(g.size()==0){
            cout<<"Envalid";
            return;
        }
        gmail=g;
    }
    //getter
    int getpercent(int pin){
        if(pin==123){
        return percent;
        }
        else return 0;
    }
    string getgmail(){
        return gmail;
    }

};

int main(){
    Student s1;
    s1.name="Prasad";
    s1.roll=101;
    s1.branch="CSE";
    s1.setpercent(99);
    s1.setgmail("pbb@gmail.com");
    cout<<s1.name<<"   "<<s1.branch<<"   "<<s1.roll<<"   "<<s1.getpercent(123)<<"   "<<s1.getgmail()<<endl;

    Student s2;
    s2.name="Ram";
    s2.roll=102;
    s2.branch="CSE";
    s2.setpercent(99);
    s2.setgmail("rn123");
    cout<<s2.name<<"   "<<s2.branch<<"   "<<s2.roll<<"   "<<s2.getpercent(12)<<"   "<<s2.getgmail()<<endl;
}