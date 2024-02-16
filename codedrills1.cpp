#include<bits/stdc++.h>

using namespace std;

void solve()
{
    double x,y,z;
    cin>>x>>y>>z;
    if((x+y+z)/3>=30)
    {
        cout<<"PASS\n";
    }
    else
    {
        cout<<"FAIL\n";
    }
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