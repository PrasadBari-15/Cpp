#include<iostream>
using namespace std;
int main(){
    long long int principal,rate;
    float time;
    cout<<"Enter a Principle:"<<endl;
    cin>>principal;
    cout<<"Enter a Rate"<<endl;
    cin>>rate;
    cout<<"Enter a Time in months"<<endl;
    cin>>time;
    float simple = (principal*time*rate)/100;
    cout<<"Simple intrest is:"<<simple;
}