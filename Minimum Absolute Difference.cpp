#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,diff,max=10e+7;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
     cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n-1;i++)
    {
        diff = abs(arr[i]-arr[i+1]);
        if(diff<max)
         max = diff;
    }
    cout<<max<<endl;
    return 0;
}
