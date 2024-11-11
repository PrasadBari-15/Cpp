#include<iostream>
using namespace std;
int main()
{
    int arr[]{11,9,45,21,2,1,10,3,8,15,24};

    int n=sizeof(arr)/sizeof(int);

    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 &&arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

}