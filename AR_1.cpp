#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}