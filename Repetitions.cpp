#include <bits/stdc++.h>
using namespace std;

int solve()
{
  string s;
  cin>>s;
  char curr = s[0];
  int count=0, maxCount=-1;
  for(char c:s)
  {
    if(c==curr){
        count++;
    }else{
        curr = c;
        count=1;
    }
    maxCount= max(maxCount, count);
  }
  cout<<maxCount<<endl;
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