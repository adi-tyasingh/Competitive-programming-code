#include <bits/stdc++.h>
using namespace std;
int solve()
{
  int l, r;
    cin >> l >> r;
    if (r == 1 || r == 2 || r == 3)
    {
      cout << -1;
      return 0;
    }
    if (r - l >= 2 && l % 2 == 0)
    {
      cout << l << " " << 2 << endl;
    }
    else if (r - l > 2)
    {
      cout << l + 1 << " " << 2 << endl;
    }
    else if (r - l == 2)
    {
      int c = l + 1;
      cout << c - 2 << " " << 2 << endl;
    }
    else if (r - l == 1)
    {
      if (l % 2 == 0)
      {
        cout << l - 2 << " " << 2 << endl;
      }
      else
      {
        cout << r - 2 << " " << 2 << endl;
      }
    }
    else if (r - l == 0)
    {
      if (r % 2 == 0)
      {
        cout<<r-2<<" "<<2<<endl;
      }
      else
      {
        for(int i=3;i<(r/2)+2;i=i+2)
        {
          int tmp=r-i;
          for(int j=2;j<min(i,tmp);j++)
          {
            if(i%j==0 && tmp%j==0)
            {
              cout<<i<<" "<<tmp<<endl;
              return 0;
            }
          }
        }
      }
    }
    else
    {
      cout<<-1<<endl;
    }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}