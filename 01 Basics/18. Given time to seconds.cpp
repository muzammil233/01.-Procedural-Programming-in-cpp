#include<iostream>
using namespace std;

int main ( )
{
    int hours;
    cout<<"Enter hours:";
    cin>>hours;
    
    int minutes;
    cout<<"Enter minutes:";
    cin>>minutes;
    
    int seconds;
    cout<<"Enter seconds:";
    cin>>seconds;
    
    int totalSeconds = (hours * 3600) + (minutes * 60) +      seconds;
    
    cout<<hours<<" hour(s) "<<minutes<<" minute(s) "<<seconds<<" seconds equals: "<<totalSeconds<<" seconds";
   
    return 0;
}