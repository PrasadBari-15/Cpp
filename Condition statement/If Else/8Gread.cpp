#include<iostream>
using namespace std;
int main(){
    int daa,spg,se,bda,wc,total;
    cout<<"Enter the marks for DAA :"<<endl;
    cin>>daa;
    cout<<"Enter the marks for SPG :"<<endl;
    cin>>spg;
    cout<<"Enter the marks for SE :"<<endl;
    cin>>se;
    cout<<"Enter the marks for WC :"<<endl;
    cin>>wc;
    cout<<"Enter the marks for BDA :"<<endl;
    cin>>bda;

    if(daa>=40 &&spg>=40 && bda>=40 && se>=40 && wc>=40){
        cout<<"Pass"<<endl;
        total=(daa+spg+se+wc+bda)/5;
        cout<<total<<"%";
    }
    else{
        cout<<"Fail"<<endl;
    }

}