#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n;
  cin>>n;
  while(true)
  {
    cout<<n<<" ";
    if(n==1) return 0;
    if(n%2==0)
    {
      n/=2;
    } 
    else
    {
      n = n*3 + 1;
    }
  }
  return 0;  
}


int main()
{
  int tc = 1;
  //cin>>tc;
  while(tc--)
  {
    solve();
  }

}