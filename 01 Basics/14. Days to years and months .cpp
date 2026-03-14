#include<iostream>
using namespace std;

int main ( )
{
    int days;
    cout<<"Enter number of days : ";
    cin>>days;
    
    int years = days / 365;
    days = days % 365;
    int months = days / 30;
    int remainingdays = days % 30;
    
    cout<<"The given days are equal to : "<<years<<" year(s) "<<months<<" month(s) "<<remainingdays<<" days.";
    
    return 0;
}