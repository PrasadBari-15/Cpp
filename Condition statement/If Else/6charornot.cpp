#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character ";
    cin>>ch;
    // if(ch>='a' || ch<='z' || ch>='A' || ch<='Z' ){
    //     cout<<ch<<" Is an alphabet";
    // }

    int ascii = (int)ch;           //Type cast
    if(ascii>=65 && ascii<=90  || ascii>=97 && ascii<=123){
        cout<<"It is an alphabet";
    }
}