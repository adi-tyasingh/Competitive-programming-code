#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    vector<long long>vec(n);
    for(long long i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    long long ans=0;
    if(n==1)
    {
        cout<<vec[0]-1<<endl;
        return;
    }
    for(long long i=0;i<n-1;i++)
    {
        if(vec[i]>vec[i+1])
        {
            ans += (vec[i] - vec[i+1]);
        }
        
    }
    cout<<ans<<endl;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}