#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    cout<<"m1="<<m1;
    cout<<"m2="<<m2;
    if(m1==m2){
        cout<<"Poins lies on same lies";
    }
    else 
    cout<<"Point does not lies on a same line";
}