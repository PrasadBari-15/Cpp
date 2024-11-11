//Array: Set of similar data types stored in consequtative sequence
//Operation performed on an array
/*
1. Traversing
2. searching
3. sorting
4. Insertion
5. deletion
*/

//Traversing : Visiting each element at once

// Qu:- Find Sum of elements present in array

#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    int arr[100];
    cout<<"Enter a Total elements in an array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    cout<<"Inserted element is: "<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" "<<endl;
        sum=sum+arr[i];
    }

    cout<<"Sum of all elements is : "<<sum;
    
}