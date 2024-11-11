#include<iostream>
using namespace std;

int BinarySearch(int arr[],int key,int n){
    int start=0;
    int end=n;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else start=mid+1;
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[]={1,2,33,55,59,65,70,75,79,88};
    int n= sizeof(arr)/sizeof(0);
    int key;
    cin>>key;
    int result=BinarySearch(arr,key,n);
    cout<<"Element is found at index:"<<result;

    
}

