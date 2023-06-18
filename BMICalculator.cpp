#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float height,weight,BMI;
    
    cout<<"Please enter height(in cm): ";
    cin>>height;
    cout<<"Please enter weight(in kg): ";
    cin>>weight;

    BMI=(weight*10000)/(pow(height,2));
    cout<<"Your BMI is "<<BMI<<endl;
   
    if(BMI<=18.5)
        {
            cout<<"You are underweight.";
        }
    else if(BMI>=25 && BMI<30)
        {
            cout<<"You have overweight.";
        }    
    else if(BMI>18.5 && BMI<25)
        {
            cout<<"You have normal weight.";
        }
    else
        {
        cout<<"You have obesity";
        }       
}        