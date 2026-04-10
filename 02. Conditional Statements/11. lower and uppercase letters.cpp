#include<iostream>
using namespace std;

int main ( )
{
    char ch;
    cout<<"Enter a letter:";
    cin>>ch;
    
    if ( ch >= 'A')
    {
        if ( ch <= 'Z')
        {
            cout<<ch<<" is an uppercase letter , "<<endl;
            ch = ch + 32;
            cout<<" its lowercase is: "<<ch;
         }
     
         else 
         {
           if( ch >= 'a' )
           {
               if ( ch <= 'z' )
               {
                   cout<<ch<<" is a lowercase letter,"<<endl;
                   ch = ch - 32;
                   cout<<" its uppercase is: "<<ch;
               }
            }
         }
    }
       else
            {
                cout<<ch<<" is not an alphabet.";
            }
    
    return 0;
}