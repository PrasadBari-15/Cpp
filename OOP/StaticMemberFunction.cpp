//static member function are created in class and initalize in class.
// this function access only static members

#include<iostream>
using namespace std;
class Customer{
    private:
    string name;
    int acc_no,balance;
    static int Total_Customer;
    static int Total_Balance;

    public:
    Customer(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        Total_Customer++;
        Total_Balance+=balance;
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }

    // void displayCus(){
    //     cout<<"Total customer = "<<Total_Customer<<endl;
    // }
    static void acessStatic(){
        cout<<"Total number of customer is : "<<Total_Customer<<endl;
        cout<<"Total Balance : "<<Total_Balance;

    }
};

int Customer::Total_Customer=0;
int Customer::Total_Balance=0;

int main(){
    Customer c1("P",1001,10000);
    c1.display();
   // c1.displayCus();
    
   Customer c2("A",1002,20000);
    c2.display();
   // c1.displayCus();

    Customer c3("B",1003,30000);
    c3.display();
  //  c1.displayCus();
    Customer c4("C",1003,21000);
    c4.display();
  //  c1.displayCus();

    Customer::acessStatic();
   

}