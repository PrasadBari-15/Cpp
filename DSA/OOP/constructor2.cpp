#include<iostream>
using namespace std;
class Customer{
    public:
    string name;
    int account_no;
    double balance;

    //default constructor
    Customer(){
        name="Prasad";
        account_no=1001;
        balance=10000;
    }
    //Parameterize constructor
    Customer(string a,int b,double c){
        name=a;
        account_no=b;
        balance=c;
    }

    //Constructor Overloading  --> function/constructor having same name but different parameters
    Customer(string a,int b){
        name=a;
        account_no=b;            
        //print garbage value for balance otherwise we can also do
        balance=30000; 
    }
    /* Inline constructor
    inline Customer(string a, int b,double c) : name(a), account_no(b), balance(c){
    }
    */

    //this method :- points a current object
    Customer(string name,double balance){
        this->name=name;
        account_no=1004;
        (*this).balance=balance;
    }

    //copy constructor
    Customer(Customer &B){
        name=B.name;
        account_no=B.account_no;
        balance=B.balance;
    }

    void display(){
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }

};

int main(){
    Customer c1;  //call default constructor
    Customer c2("Digambar",1002,20000.50);   //call parameterize constructor
    Customer c3("Shyam",1003);    //for overloading
    Customer c4("Ravi",40000.60);
    Customer c7;
    c7.name="prasad";
    c7.account_no=10010;
    c7.balance=500;

    c1.display();
    c2.display();
    c3.display();
    c4.display();

    Customer c5(c4);  //default copy constructor
    c5.display();

    Customer c6(c1);
    c6.display();

    c7.display();
    
}