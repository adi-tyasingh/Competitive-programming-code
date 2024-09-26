#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n;
  cin>>n;
  long long sum = 0;
  for(long long i=0; i<n-1; i++)
  {
    long long x;
    cin>>x;
    sum+=x;
  }
  cout<<(n*(n+1))/2 - sum;
  return 0;  
}


int main()
{
  int tc=1;
  //cin>>tc;
  while(tc--)
  {
    solve();
  }

}