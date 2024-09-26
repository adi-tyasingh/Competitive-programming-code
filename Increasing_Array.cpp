#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<long long>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  long long res = 0;
  for(int i=1;i<n; i++)
  {
    if(vec[i]<vec[i-1])
    {
        res += vec[i-1] - vec[i];
        vec[i] = vec[i-1];
    }
  }
  cout<<res<<endl;
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