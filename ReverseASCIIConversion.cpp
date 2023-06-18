/*

Program to convert ASCII number into an alphabet

*/
#include <iostream>
using namespace std;

int main()
{
    int n1;
    cout<<"Please enter an ASCII number to convert into message: ";
    cin>> n1;
    cout<< "Translated message from given number is: "<< char(n1)<<endl;
}