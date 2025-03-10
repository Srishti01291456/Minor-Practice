#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key)
        {return i;}
    }
    return -1;
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to search";
    cin>>key;
    int result=linearsearch(arr,n,key);
    if(result!=-1)
    {
        cout<<"element found at index"<<result<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}