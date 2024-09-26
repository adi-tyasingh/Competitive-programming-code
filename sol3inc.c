#include <stdio.h>

int solve()
{
  int n;
  scanf("%d",&n);
  for(int i=2; i<=n; i++)
  {
    int count =0;
    for(int j=1; j<=i; j++)
    {
        if(i%j==0)
        {
            count++;
        }
    }
    if(count<3)
    {
      printf("%d ",i);
    }
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
  return 0;
}