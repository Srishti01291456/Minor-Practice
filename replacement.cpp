#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i;
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i')
        {
            s[i]='*';
        }
    }
    cout<<s<<endl;
}