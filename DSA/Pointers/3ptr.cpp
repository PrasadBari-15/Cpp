//copying pointer
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int *p=ptr;
    cout<<ptr<<"\n value : "<<*ptr<<endl;
    cout<<p<<"\n value : "<<*p<<endl;


    // Arithmatic operators
    int b=20;
    cout<<"Before b="<<b<<endl;
    int *p1=&b;
    *p1=*p1+1;
    cout<<"After b="<<*p1<<endl;

    cout<<ptr<<endl;
    ptr++;
    cout<<ptr;  //--> address of ptr inc. by 4
}