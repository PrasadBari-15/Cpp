#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,3,4,9,8,6,7};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        } swap(arr[i],arr[minIndex]);
    }
for(int i=0;i<n;i++){
    cout<<arr[i]<<"  "<<endl;
}
}