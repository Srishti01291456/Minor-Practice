#include<iostream>
using namespace std;
int sumofdigits(int n)
{
    int res=0,rem;
    while(n>0)
    {
        rem=n%10;
        res=res+rem;
        n=n/10;
    }
    return res;
}
int main()
{
    int a,t;
    cin>>a;
    t=sumofdigits(a);
    cout<<t;
}