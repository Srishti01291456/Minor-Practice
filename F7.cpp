#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
    int x,y,t;
    cin>>x>>y;
    t=gcd(x,y);
    cout<<t;
}