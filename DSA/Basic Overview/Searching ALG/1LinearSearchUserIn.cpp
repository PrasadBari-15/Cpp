//by taking input from user
#include<iostream>
using namespace std;

int LinearSearch(int arr[],int key,int n){
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size if an array : ";
    cin>>n;
    cout<<"Insert "<<n<<" elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"Inserted elements are : ";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<"Enter an element which you want to search:";
    int key;
    cin>>key;

    int result=LinearSearch(arr,key,n);
    if(result!=-1){
        cout<<"Element is found at index "<<result<<" Of an array"<<endl;
        cout<<"Element is present at "<<result+1<<" Location";
    }
    else cout<<"Element is not present";
}