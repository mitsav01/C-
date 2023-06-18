#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float height,weight;
    
    cout<<"Please enter height(in cm): ";
    cin>>height;
    cout<<"Please enter weight(in kg): ";
    cin>>weight;

    float BMI=(weight*10000)/(pow(height,2));
    cout<<"Your BMI is "<<BMI<<endl;
   
    if(BMI<=18.5)
        {
            cout<<"You are underweight.";
        }
    else if(BMI<=24.9 && BMI>18.5)
        {
            cout<<"You have normal weight.";
        }
    else if (BMI<=29.9 && BMI>24.9)
        {
                cout<<"You have overweight.";
        }
    else
        {
                cout<<"You have obesity.";
        }       
}        