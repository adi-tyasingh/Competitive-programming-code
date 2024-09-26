#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, res = -1; cin>>n;
  map<int,int>mp;
  for(int i=0; i<2*n; i++)
  {
    int x;
    cin>>x;
    mp[x]++;
    res = max(res, mp[x]);
  }
  cout<<res<<endl;
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}