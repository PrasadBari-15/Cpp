#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    if(n==1)cout<<1;
    else{
    while(n>1){
        fact=fact*n;
        n-=1;
    }
    cout<<fact;
    }
    
}