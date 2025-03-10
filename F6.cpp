#include<iostream>
using namespace std;
int nfibonaccinum(int n)
{
    if(n<=1)
    return n;
    else
    return nfibonaccinum(n-1)+nfibonaccinum(n-2);
}
int main()
{
    int a,t;
    cin>>a;
    t=nfibonaccinum(a);
    cout<<t;
}