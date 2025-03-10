#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    double avg=sum/n;
    cout<<sum<<endl<<avg<<endl;
    return 0;
}