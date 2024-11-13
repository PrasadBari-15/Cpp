#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag=true;
    cout<<"Enter a number : ";
    cin>>n;
    if(n==1)cout<<"Number is nither prime nor composite";
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=false;
        }
        break;
    }
    if(flag==true)cout<<"No. is Prime";
    else
    cout<<"No. is Not prime";
}