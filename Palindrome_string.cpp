#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s)
{
    int left=0;
    int right=s.length()-1;
    while(left<right)
    {
        if(s[left]!=s[right])
        return false;
        left++;
        right--;
    }
    return true;
}
int main()
{
    string a="madam";
    if(isPalindrome(a))
    cout<<"yes"<<endl<<a<<endl;
    else
    cout<<"no"<<endl<<a<<endl;
}