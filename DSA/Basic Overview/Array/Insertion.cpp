#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,9,7,3};
    int n, item;

    n=sizeof(arr)/sizeof(int);

    item=10;
    arr[n]=item;

   for(int i=0;i<=n;i++){
    cout<<arr[i]<<"   ";
   }

    
}