#include <bits/stdc++.h>
using namespace std;

#define pi 3.1415926535

int solve()
{
  double r;
  cin>>r;
  double res =  pi*r*r;
  cout<<fixed<<setprecision(7)<<res<<endl;
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