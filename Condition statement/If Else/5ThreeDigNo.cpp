#include<iostream>
using namespace std;
int main(){
     int a;
    cout<<"Enter a Digit:";
    cin>>a;
    if(a>=100 && a<=999){
        cout<<a<<" is a 3 digit number";
    }
    else
        cout<<a<<" is not a 3 digit number";
}