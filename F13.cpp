#include<iostream>
using namespace std;
int area(int a)
{
    return a*a;
}
int area(int l,int b)
{
    return l*b;
}
double area(double r)
{
    return 3.14*r*r;
}
int main()
{
    cout<<area(2)<<endl;
    cout<<area(2,3)<<endl;
    cout<<area(3.245)<<endl;
}