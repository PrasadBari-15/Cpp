//Encapsulation:--> Wrapping up a data i.e member(variable) and member function in a single unit.

#include<iostream>
using namespace std;

class Customer{
    private:
    string name;
    int acc_no,balance,age;

    public:
    Customer(string name,int acc_no,int balance,int age){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        this->age=age;
    }

    void Deposit(int amount){
        cout<<"Deposited amount: "<<amount<<endl;
        if(amount>0){
            balance+=amount;
        }
        else cout<<"Invalid amount "<<endl;

        cout<<"Current Balance: "<<balance<<endl;
    }

    void Withdraw(int amount){
        cout<<"Withdraw amount: "<<amount<<endl;
        if(amount<balance){
        balance-=amount;
        cout<<"Current Balance "<<balance<<endl;
        }
         else cout<<"Insufficient money:"<<endl;
    }

    void display(){
        cout<<"Account Details:"<<endl<<name<<" "<<acc_no<<" "<<balance<<" "<<age<<endl;
    }
};

int main(){
    Customer c1("Prasad",100,1000,19);
    c1.display();
    c1.Withdraw(100);
    c1.display();
    cout<<endl;
    Customer c2("A",101,2000,20);
    c2.display();
    c2.Deposit(1000);
    c2.display();

    cout<<endl;
    c1.display();
    c1.Withdraw(200);
    c1.display();
}