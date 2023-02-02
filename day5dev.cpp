#include <iostream>
using namespace std;
// Given an array a[] of size n.for every i form 0 to n-1 output max(a[0],a[1],...a[i])
int main()
{
    // int mx=-1999999;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    /*for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }*/
    // Sum of all subarrys

    int curr=0;
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=a[j];
            cout<<a[j]<<endl;
        }
    }
    return 0;
}
