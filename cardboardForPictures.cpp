#include<bits/stdc++.h>
#define ll long long  
using namespace std;
int solve()
{
  ll n,c;// n<- number of paintings || c<- amount of cardboard used in total 
  cin>>n>>c;
  vector<ll> vect(n);
  for(int i=0;i<n;i++)
  {
    cin>>vect[i];
  }

  ll l=1;
  ll r=1e9;
  while(l<=r)
  {
    ll totalArea=0;
    ll mid = l+((r-l)/2);
    for(int i=0;i<n;i++)
    {
      totalArea += (vect[i] + 2*mid) * (vect[i] + 2*mid);
      if(totalArea>c)
      {
        break;
      }
    }  

    if(totalArea==c)
    {
      cout<<mid<<endl;
      return 0;
    }
    else if(totalArea>c)
    {
      r=mid-1;
    }
    else
    {
      l=mid+1;
    }
  }
  return 0;
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