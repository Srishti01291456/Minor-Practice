#include<iostream>
using namespace std;
string concat(string str1,string str2)
{
    return str1+str2;
}
string concat(int num,string str)
{
    return to_string(num)+str;  //Type Casting
}
int main()
{
    cout<<concat("Hello","World")<<endl;
    cout<<concat(5,"is_my_lucky_number")<<endl;

}