/* Program to swap values of given variables;*/

#include<iostream>
using namespace std;

int main()
{
    int a=10,b=20;

    a=a-b;
    b=a+b;
    a=b-a;

    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
}