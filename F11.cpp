#include<iostream>
using namespace std;
class Calculator{
public:
int multiply(int a,int b)
{
    return a*b;
}
double multiply(int c,double d)
{
    return c*d;
}
float multiply(float x,float y,float z)
{
    return x*y*z;
}
};
int main()
{
    Calculator calc;
    cout<<calc.multiply(2,3)<<endl;
    cout<<calc.multiply(2,3.345)<<endl;
    cout<<calc.multiply(2.5f,3.1f,1.2f)<<endl;
}