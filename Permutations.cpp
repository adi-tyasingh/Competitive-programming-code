#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  if(n<4 && n!=1)
  {
    cout<<"NO SOLUTION\n";
    return 0;
  }
  for(int i=2; i<=n; i+=2)
  {
    cout<<i<<" ";
  }
  for(int i=1; i<=n; i+=2)
  {
    cout<<i<<" "; 
  }
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