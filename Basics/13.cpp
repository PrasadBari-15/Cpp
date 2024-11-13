#include<iostream>
using namespace std;
int main(){
    int p=5;
    int q=10;
    p += q -= p;
    cout<<"p="<<p<<endl;
    cout<<"q="<<q<<endl;
}