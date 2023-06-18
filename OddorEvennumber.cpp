/* Program to check whether the number is even or odd*/


#include<iostream>
using namespace std;

int main()
{
    int number; //declaration of input variable
    cout<< "Please enter a whole number:";
    cin>> number;

    /*Initialization of loop to check whether a number is odd or even*/

    if (number%2 ==0)
        {
        cout<<"This is even number."<<endl;
        }
    else
        {
        cout<<"This is odd number.";
        }
}