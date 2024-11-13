#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter a 1st digit"<<endl;
    cin>>a;
    cout<<"Enter a 2nd digit"<<endl;
    cin>>b;
    cout<<"Enter a operation"<<endl;
    cin>>ch;
    
    if(ch=='+'){
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
     if(ch=='-'){
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
    }
     if(ch=='*'){
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    }
     if(ch=='/'){
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
    }
}