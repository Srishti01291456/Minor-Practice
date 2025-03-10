#include<iostream>
using namespace std;
int maxnumber(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int x,y,c;
    cin>>x>>y;
    c=maxnumber(x,y);
    cout<<c<<endl;
}