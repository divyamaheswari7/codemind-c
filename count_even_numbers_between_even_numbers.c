#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(i=1;i<n-1;i++)
    {
        if(arr[i-1]%2==0 and arr[i+1]%2==0 )
        {
            c++;
        }
    }
    cout<<c;
}