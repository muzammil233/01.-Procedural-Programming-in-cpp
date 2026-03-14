#include<iostream>
using namespace std;

int main ( )
{
    int num;
    cout<<"Enter a three digit number : ";
    cin>>num;
    cout<<"The Number is : "<<num<<endl;
    
    int a = (num % 10 ) ;
    num = num / 10 ;
    int b = num % 10 ;
    num = num / 10 ;
    int c = num ;
    
    int reversedNum = (a * 100) + (b * 10 ) + c ;
    
    cout<<" Reverse of the number is : "<<reversedNum ;
    
    return 0;
}
    