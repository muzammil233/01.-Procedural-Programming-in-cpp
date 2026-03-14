#include<iostream>
using namespace std;

int main ( )
{
    int num1 , num2 , num3 , num4 , num5;
    cout<<"Enter five numbers:";
    cin>>num1>>num2>>num3>>num4>>num5;
    
    float sum = num1 + num2 + num3 + num4 + num5;
    
    float average = sum / 5;
    
    cout<<"Sum of numbers:"<<sum<<endl;
    cout<<"Average of numbers:"<<average;
    
    return 0;
}