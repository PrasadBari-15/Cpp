//Insert in element on a prticular location

#include<iostream>
using namespace std;
int main(){
    int arr[20]={1,2,5,20,8,6};
    int item,loc;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<"At which location you want to insert an element: "<<endl;
    cin>>loc;
    cout<<"enter an element which you want to insert: "<<endl;
    cin>>item;
    for(int i=5;i>=loc-1;i--){
        arr[i]=arr[i-1];
    }
    arr[loc-1]=item;

    for(int i=0;i<6;i++){
        cout<<arr[i]<<"  ";
    }

}