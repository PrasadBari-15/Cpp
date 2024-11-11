#include<iostream>
using namespace std;
int main()
{
    int arr[10]={23,54,85};
    cout<<"Address of first memory block : "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is :"<<&arr[0]<<endl;
    cout<<"1-> "<<*arr<<endl;
    cout<<"2nd "<<*arr+1<<endl;  //performs arithmatic operation on 1st element 
    cout<<"2nd ->"<<*(arr+1)<<endl; //gives 2nd element
    cout<<"3rd ->"<<*(arr+2)<<endl;

    int i=2;
    cout<<i[arr]<<endl;

   int temp[10]={10,2,3,4};
    cout<<"size of given array"<<sizeof(temp)<<endl;  //int*n = 4*10 -->40
    cout<<" 1st "<<sizeof(*temp)<<endl;  //int*arr[0] 
    cout<<" 2nd "<<sizeof(&temp)<<endl;  //size of arr[0]

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    cout<<ptr<<endl;
    cout<<ptr+1;
    

}