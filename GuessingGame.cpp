#include<iostream>
using namespace std;

int main()
{
    float P1,P2;
    
    cout<<"Player 1, enter a number:";
    cin>>P1;
   
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

    cout<<"Player 2, enter a number:";
    cin>>P2;

    (P1==P2)? cout<<"Correct,Both numbers are same.": cout<<"Failed, numbers are not same.";

}