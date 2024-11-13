// Absolute : |6| -> 6
//            |-6| -> 6


#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a value : ";
    cin>>a;

    if(a>=0){
        cout<<"Absolute value of "<<a<<" "<<"is "<<a;
    }
    else
    cout<<"Absolute value of "<<a<<" "<<"is "<<-a;
    return 0;

}