#include <stdio.h>
using namespace std;

int solve()
{
  long long a,b;
  scanf("%lld, %lld",&a,&b);
  if(a%b==0)
  {
    printf("%lld", a/b);
  }
  else
  {
    printf("%lld", (a/b)+1);
  }
  printf(" %lld", a/b);
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