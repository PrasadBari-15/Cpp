#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
        cout<<"It is an alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"It is an digit";
    }
    else cout<<"It is an special character";
}