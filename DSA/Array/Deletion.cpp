#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int loc,n,ele;
    n=sizeof(arr)/sizeof(int)-1;
    cout<<"Inserted elements are : "<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"\nEnter an element which you want to delete: "<<endl;
    cin>>ele;
        for(int i=0;i<=n;i++){
            if(arr[i]==ele){
                loc=i;
            }
        }
   for(int i=loc;i<=n;i++){
    arr[i]=arr[i+1];
   }
   arr[n]=0;

   for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
   }
}