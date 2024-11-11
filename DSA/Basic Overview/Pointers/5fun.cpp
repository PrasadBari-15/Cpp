#include<iostream>
using namespace std;

int update(int *ptr){
    // ptr=ptr+1;
   // cout<<"inside function: "<<ptr<<endl;   //address inc
    *ptr=*ptr+1;
    cout<<*ptr<<endl;
}

int main()
{
    int age=10;
    int *ptr=&age;
    cout<<*ptr<<endl;  //--> 10
   // cout<<"before calling function : "<<ptr<<endl; 
    update(ptr);
   // cout<<"After calling function : "<<ptr<<endl;   //address remain same
    cout<<*ptr<<endl; //--> 11

}

