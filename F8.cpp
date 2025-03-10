#include<iostream>
using namespace std;
void print(string str)
{
    cout<<"Enter a string:"<<str<<endl;
}
void print(int n)
{
    cout<<"Enter a number:"<<n<<endl;
}
void print(string stri,int num)
{
    cout<<"Enter a string:"<<stri<<endl;
    cout<<"Enter a number:"<<num<<endl;
}
int main()
{
    print("Hello World!");
    print(45);
    print("Hello",43);
    return 0;
}