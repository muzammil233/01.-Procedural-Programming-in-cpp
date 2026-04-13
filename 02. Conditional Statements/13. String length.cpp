#include<iostream>
using namespace std;

int main ( )
{
    string psw;
    cout<<"Enter password:";
    getline( cin , psw);
    
    
    if ( psw.length() == 0 ) 
    {
        cout<<"Empty string";
    }
    
    else
    {
        if (  psw.length() <= 5)
        {
            cout<<"Short string.";
        }
        else
        {
           if ( psw.length() <= 10 )
           {
               cout<<"Medium string.";
           }
           else
           {
               cout<<"Long string.";
           }
        }
    }
    
    return 0;
}