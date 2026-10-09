#include<iostream>
using namespace std;
int main(){
    int num1,num2; //declaration of all future variables
    char opt;
    cout<<"enter number1: "<<endl;
    cin>>num1;
    cout<<"enter number 2: "<<endl;
    cin>>num2;
    cout<<"Enter opperation you would like to perform(*,+,-,/,%): ";
    cin>>opt;
if(opt == '*')
    cout<<"\nMultiplication of "<<num1<<" into "<<num2<<" will be "<< (num1*num2);
else if(opt == '+')
    cout<<"\nAddition of "<<num1<<" and "<<num2<<" will be "<<(num1+num2);
else if(opt == '/')
    { 
    if(num2 !=0)
        cout<<"\nDivision of "<<num1<<" and "<<num2<<" will be "<<(float(num1)/ float(num2));  
    else
        cout<<"\nCannot divide by zero";
    }    
else if(opt == '-')
    cout<<"\nSubtraction of "<<num1<<" to "<<num2<<" will be "<<(num1-num2);
else if(opt == '%')
    {
    if(num2 !=0)
        cout<<"\nModulus of "<<num1<<" with "<<num2<<" will be "<<(num1 % num2);
    else
        cout<<"\nCannot divide by zero";
    }
else
    cout<<"\nEntre a valid operator(*,+,-,/,%)";
}