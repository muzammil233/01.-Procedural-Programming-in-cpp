#include<iostream>
using namespace std;

int main ( )
{
    float marks;
    cout<<"Enter marks obtained : ";
    cin>>marks;
    
    int totalMarks;
    cout<<"Enter total marks : ";
    cin>>totalMarks;
    
    float percentage = (marks / totalMarks) * 100; // implicit typecasting from int to float.
    
    cout<<marks<<" obtained out of "<<totalMarks<<endl;
    cout<<"Percentage : "<<percentage ;
    
    return 0;
}