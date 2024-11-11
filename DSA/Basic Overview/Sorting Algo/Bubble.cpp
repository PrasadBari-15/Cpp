#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,5,3,6,1,4,2,7,9,8};
    int n=sizeof(arr)/sizeof(int);

    for(int i=1;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

            }
        }
    
   for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
   }
}