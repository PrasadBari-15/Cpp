#include<iostream>
using namespace std;
class Customer{
    private:
    int salary;

    public:
    void setsalary(int n){
        salary = n;
    }
    void getsalary(){
        cout<<salary<<endl;
    }
};

int main(){
    Customer c1;
    c1.setsalary(500);
    c1.getsalary();
}