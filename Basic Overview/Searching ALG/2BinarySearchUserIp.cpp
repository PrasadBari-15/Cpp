#include<iostream>
using namespace std;

int BinarySearch(int arr[],int mid,int start,int end,int key){
    for(int i=mid;i<=end;i++){
        if(arr[mid]==key){
            return i;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else 
        start=mid+1;

        mid=(start+end)/2;  //start+(end+start)/2

    }
    return -1;

}

int main(){
    int arr[100];
    int n,mid,start,end,key;
    cout<<"Enter a size of array: ";
    cin>>n;
    cout<<"Insert "<<n<<" elements:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"Inserted elements are:";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter a element which you want to search: "<<endl;
    cin>>key;
    start=arr[0];
    end=arr[n-1];
    mid=(start+end)/2;

    int result=BinarySearch(arr,mid,start,end,key);
    if(result!=-1){
        cout<<"Element "<<key<<" is found at place "<<result+1<<" of an array";
    }
    else cout<<"Element is not present in an given array";

}