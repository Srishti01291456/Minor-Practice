#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    bool isPalindrome=true;
    int i;
    for(i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            isPalindrome=false;
            break;
        }
    }
    if(isPalindrome)
    cout<<"yes"<<s<<endl;
    else
    cout<<"no"<<s<<endl;
    return 0;
}