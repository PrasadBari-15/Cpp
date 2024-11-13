#include<iostream>
using namespace std;
int main(){
    cout<<"Even no's : ";
    for(int i=1;i<=100;i++){
       if(i%2==0){
        cout<<i <<" ";
       }
    }
    cout<<endl<<"Odd no's : ";
    for(int i=1;i<=100;i++){
       if(i%2!=0){
        cout<<i <<" ";
       }
    }

    
}