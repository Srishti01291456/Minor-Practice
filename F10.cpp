#include<iostream>
using namespace std;
class Calculator{
public:
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
};
int main()
{
    Calculator calc;
    cout<<calc.sum(1,2)<<endl;
    cout<<calc.sum(2.345,4.567,2.347)<<endl;
    cout<<calc.sum(4,4.5f)<<endl;
}