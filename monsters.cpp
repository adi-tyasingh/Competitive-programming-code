#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
  if (a.first == 0 && b.first == 0)
  {
    return a.second < b.second;
  }
  else if (a.first == 0 && b.first != 0)
  {
    return true;
  }
  else if (a.first != 0 && b.first == 0)
  {
    return false;
  }
  else
  {
    if (a.first == b.first)
    {
      return a.second < b.second;
    }
    else
    {
      return a.first > b.first;
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> vec;
    for (int i = 1; i < n + 1; i++)
    {
      int tmp;
      cin >> tmp;
      tmp = tmp % k;
      vec.push_back(make_pair(tmp, i));
    }

    sort(vec.begin(), vec.end(), comp);

    for (int i = 0; i < n; i++)
    {
      cout << vec[i].second << " ";
    }
    cout << endl;
  }
}