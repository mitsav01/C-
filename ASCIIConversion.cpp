/*Given is the program to convert a 5 character word into ASCII message*/

#include <iostream>
using namespace std;

int main()
{
    char c1,c2,c3,c4,c5; //declaration of variables
    
    
    cout << "Please enter five characters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout<< "ASCII message is " << int(c1)<<" "<< int(c2)<<" "<< int(c3)<<" "<< int(c4)<<" "<<int(c5);
}