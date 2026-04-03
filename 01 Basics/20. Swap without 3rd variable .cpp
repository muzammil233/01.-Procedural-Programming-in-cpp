#include<iostream>
using namespace std ;

int main ( )
{
    int a = 10;
    int b = 20;
    
    cout<<"Before Swap: \n";
    cout<<"a = "<<a<<" , "<<" b = "<<b<<endl;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout<<"After swap: \n";
    cout<<"a = "<<a<<" , "<<" b = "<<b<<endl;
    
    return 0;
}
    