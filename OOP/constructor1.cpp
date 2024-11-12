/*constructor is a special meethod
It call itself when object is created
It has name name as Class
It is use to initalize a value
It has no any return type
*/


#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    string department;
    //default constructor
    Student(){  //-->Constructor:- Same as class
    cout<<"This is constructor";  // it call itself when object is created.
    }
};

int main(){
    Student s1;
}