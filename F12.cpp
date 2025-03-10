#include<iostream>
using namespace std;
void greet()
{
    cout<<"Hello"<<endl;
}
void greet(string str)
{
    cout<<"Enter a string:"<<str<<endl;
}
void greet(string stri,int age)
{
    cout<<"Enter a string:"<<stri<<endl;
    cout<<"Enter ur age:"<<age<<endl;
}
int main()
{
    greet("Hello!");
    greet("Hello,[Srishti]!");
    greet("Hello, [Srishti]! You are [19] years old.");
}