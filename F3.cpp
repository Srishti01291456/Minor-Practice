#include<iostream>
using namespace std;
int revnumber(int n)
{
    int rev=0,rem;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main()
{
    int a,t;
    cin>>a;
    t=revnumber(a);
    cout<<t;
}