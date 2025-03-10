#include<iostream>
using namespace std;
int fact(int a)
{
    int i,fact=1;
    for(i=a;i>0;i--)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int x,n;
    cin>>x;
    n=fact(x);
    cout<<n;
}