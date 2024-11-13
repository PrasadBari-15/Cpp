#include<iostream>
using namespace std;
int main(){
    float r,area,cir;
    cout<<"Enter a Radius of a circle "<<endl;
    cin>>r;
    area=3.14*r*r;
    cout<<"Area of circle is : "<<area<<endl;
    cir=2*3.14*r;
    cout<<"Circumference of circle is : "<<cir<<endl;

    if(area>cir){
        cout<<"Area of circle is greater then circumference of circle";
    }
    else
    cout<<"Circumference of circle is greater then Radius of circle";
}