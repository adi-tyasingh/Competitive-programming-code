#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int arr[50];
    cin>>t;
    while(t>0)
    {
        int cost=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr+0,arr+n);
        int l=0,r=n-1;
        while(r>l)
        {
            cost+= arr[r]-arr[l];
            r--;
            l++;
        }
        cout<<cost<<endl;
        t--;
    }
}