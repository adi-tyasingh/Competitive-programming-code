#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>vec(n);
    for(long long i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int count=1;
    long long int max=0;
    long long int min=0;
    sort(vec.rbegin(),vec.rend());
    int index=1;
    while(count<=k){
       max+=vec[index];
       index+=2;
       count+=1;
    }
    sort(vec.begin(),vec.end());
    count=1;
    for(int i=0;i<n;i++)
    {
        if(count<k)
        {
            count++;
            min += vec[i];
        }
        else
        {
            break;
        }
    }
    min += vec[n-1-k];
    cout<<min<<" "<<max<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}