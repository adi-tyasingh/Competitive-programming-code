#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  if(abs(a-b)%d==0 && abs(b-c)%d==0 && abs(a-c)%d==0)
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
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