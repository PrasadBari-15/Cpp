#include<iostream>
using namespace std;
int main(){
    int n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000,amount;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=n2000=0;

    cout<<"Enter a amount: ";
    cin>>amount;

    switch(amount>=2000){
        case 1:
        n2000 +=amount/2000;
        amount -=n2000*2000;
        break;
    }
     switch(amount>=500){
        case 1:
        n500 +=amount/500;
        amount -=n500*500;
        break;
    }
     switch(amount>=200){
        case 1:
        n200 +=amount/200;
        amount -=n200*200;
        break;
    }
     switch(amount>=100){
        case 1:
        n100 +=amount/100;
        amount -=n100*100;
        break;
    }
     switch(amount>=50){
        case 1:
        n50 +=amount/50;
        amount -=n50*50;
        break;
    }
     switch(amount>=20){
        case 1:
        n20 +=amount/20;
        amount -=n20*20;
        break;
    }
     switch(amount>=10){
        case 1:
        n10 +=amount/10;
        amount -=n10*10;
        break;
    }
     switch(amount>=5){
        case 1:
        n5 +=amount/5;
        amount -=n5*5;
        break;
    }
     switch(amount>=2){
        case 1:
        n2 +=amount/2;
        amount -=n2*2;
        break;
    }
     switch(amount>=1){
        case 1:
        n1 +=amount;
        amount -=n1;
        break;
    }

    cout<<"requires 2000 notes "<<n2000<<endl;
    cout<<"requires 500 notes "<<n500<<endl;
    cout<<"requires 200 notes "<<n200<<endl;
    cout<<"requires 100 notes "<<n100<<endl;
    cout<<"requires 50 notes "<<n50<<endl;
    cout<<"requires 20 notes "<<n20<<endl;
    cout<<"requires 10 notes "<<n10<<endl;
    cout<<"requires 5 notes "<<n5<<endl;
    cout<<"requires 2 notes "<<n2<<endl;
    cout<<"requires 1 notes "<<n1;

}