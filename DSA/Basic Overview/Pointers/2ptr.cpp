#include<iostream>
using namespace std;
int main()
{
    int age=5;
    int *ptr=&age;
    (*ptr)++;
    cout<<*ptr;
}