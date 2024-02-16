#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int count=0;
    for(int i =0; i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int ma = max(vec[i],vec[j]);
            int mi = min(vec[i],vec[j]);
            if(ma%mi==0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}

int main()
{
    solve();
}