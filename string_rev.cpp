#include<iostream>
#include<string>
using namespace std;
void revstring(char s[],int n)
{
    int left=0,right=n-1;
    while(left<right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
}
int main()
{
    char s[]={'h','e','l','l','o','\0'};
    int n=5;
    revstring(s,n);
    cout<<s<<endl;
    return 0;
}

