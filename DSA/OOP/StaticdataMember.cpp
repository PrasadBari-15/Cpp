/*Static data member are attribute of class
Which is declared by static keyword
Only one copy of that member is created for the entire classs and shared by all objects
class member that is shared by all objects of the class
Static data member in C++ are declared inside the class but they are initialized outside of the class.
It id initialized before any object of this class is created 
*/

#include<iostream>
using namespace std;

class Customer{
    string name;
    int account_no,balance;
    static int total_customer;

    public:
    Customer(string name,int account_no,int balance){
        this->name=name;
        this->account_no=account_no;
        this->balance=balance;
        total_customer++;
    }
    void display(){
        cout<<name<<" "<<account_no<<" "<<balance<<" "<<endl;
    }
    void displaytotal(){
        cout<<"Total customers are : "<<total_customer<<endl;
    }
};
//initalize static function outside the class
int Customer::total_customer=0;

int main(){
    Customer c1("Prasad",100,10000);
    Customer c2("A",101,10000);
    Customer c3("B",102,10100);
    Customer c4("C",103,10000);
    Customer c5("D",104,10010);
    c3.displaytotal(); // it give o/p 5 here coz onlu 5 objects are build before calling this function
    Customer c6("E",105,1020);
    Customer c7("F",106,3020);
    Customer c8("G",109,3420);

    c1.display();
    c2.display();
    c3.display(); 
    c4.display();
    c5.display();
    c6.display();
    c7.display();
    c8.display();
    c3.displaytotal();  //it gives o/p 8
    
      
}