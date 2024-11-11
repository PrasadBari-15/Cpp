//Linear search
#include<iostream>
using namespace std;

int LinearSearch(int arr[],int key,int size){
    for(int i=0;i<=size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cin>>key;
    int size=sizeof(arr)/sizeof(int);
    int result=LinearSearch(arr,key,size);
    if(result!=-1){
        cout<<"Element found at index "<<result<<" of an array";

    }
    else
    cout<<"Element does not found";

}