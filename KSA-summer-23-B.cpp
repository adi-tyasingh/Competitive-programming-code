#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int count=0;
  unordered_map<double,int>slopes_I;
  unordered_map<double,int>slopes_II;
  unordered_map<double,int>slopes_III;
  unordered_map<double,int>slopes_IV;
  for(int i=0;i<n;i++)
  {
    double x,y;
    double slope;
    cin>>x>>y;
    slope=y/x;
    if(x>0 && y>0)
    {
      if(slopes_I[slope]==0)
      {
        count++;
      }
      slopes_I[slope]++;
    }
    else if(x<0 && y>0)
    {
      if(slopes_II[slope]==0)
      {
        count++;
      }
      slopes_II[slope]++;
    }
    else if(x<0 && y<0)
    {
      if(slopes_III[slope]==0)
      {
        count++;
      }
      slopes_III[slope]++;
    }
    else
    {
      if(slopes_IV[slope]==0)
      {
        count++;
      }
      slopes_IV[slope]++;
    }
  }

  cout<<(count)<<endl;
}