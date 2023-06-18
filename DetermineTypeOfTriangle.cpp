/* Program to determine type of a triangle from its input length */

#include<iostream>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"Please enter length of three sides: ";
    cin>>a>>b>>c;
    
    if(a==b && a==c)
    {
        cout<<"Equilateral triangle";
    }
    else
    {
        if(a!=b && a!=c)
        {
            cout<<"Scalene triangle";
        }
        else
        {
            cout<<"Isosceles triangle";
        }

    }
}