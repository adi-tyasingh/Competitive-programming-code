#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int b, c, h;
    cin >> b >> c >> h;
    int top = c + h;
    if (b == 2)
    {
      cout << "3" << endl;
    }
    else
    {
      if (top >= (b - 1))//excess topings case
      {
        cout<<(b+b-1)<<endl;
      }
      else //excess bread case
      {
        cout<<(top+top+1)<<endl;
      }
    }
  }
}