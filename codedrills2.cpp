#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>A(n);
    vector<int>B(n);
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        map[A[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    bool flag= true;
    if(n==1 )
    {
        if(A[0]>B[0])
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        return ;
    }

    for(int i=0;i<n;i++)
    {
        if(A[i]>B[i])
        {
            flag=false;
            break;
        }

        if(map[A[i]]>((n/2)+1) && n%2!=0)
        {
            flag=false;
            break;
        }
        else  if(map[A[i]]>((n/2)) && n%2==0)
        {
            flag=false;
            break;
        }
        
    } 

    flag ? cout<<"YES\n" : cout<<"NO\n";
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