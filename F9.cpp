#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
double sum(double c,double d,double e)
{
    return c+d+e;
}
float sum(int w,float r)
{
    return w+r;
}
int main()
{
    cout<<sum(1,2)<<endl;
    cout<<sum(2.345,4.567,2.347)<<endl;
    cout<<sum(4,4.5f)<<endl;
}
