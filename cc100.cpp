#include<bits/stdc++.h>
using namespace std;
int calc(string str, string key, int pos, int m)
{
  int score=0;
  for(int i=0;i<m;i++)
  {
    int a=str[i+pos]-48;
    int b=key[i]-48;
    score += min(abs(a-b),(b+10-a));
  }
  return score;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    string str, key;
    cin>>str>>key;
    int ans=calc(str,key,0,m);
    for(int i=0;i<=n-m;i++)
    {
      ans=min(ans,calc(str,key,i,m));
    }
    cout<<ans<<endl;
  }
}