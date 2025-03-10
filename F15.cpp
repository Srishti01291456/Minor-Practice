#include<iostream>
#include<cmath>
using namespace std;
int power(int b,int e)
{
    return pow(b,e);
}
double power(double c,int d)
{
    return pow(c,d);
}
int main()
{
    cout<<power(2,3)<<endl;
    cout<<power(1.23,3)<<endl;
}
