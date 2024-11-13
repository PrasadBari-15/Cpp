#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int c;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=1;i<=n-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c; 
    }
   
}