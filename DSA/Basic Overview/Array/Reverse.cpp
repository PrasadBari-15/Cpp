#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6,7,9};
   
   int n=sizeof(arr)/sizeof(int);
   int start =0;
   int end =n-1;

   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }

   for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
   }
}
   
