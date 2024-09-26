#include <bits/stdc++.h>
using namespace std;

string encrypt(string s){
    unordered_map<char, int>mp;
    for (char c:s)
    {
        if(isalpha(c))
            mp[c]++;
    }
    string res="";
    for(auto it = mp.begin(); it!= mp.end(); it++ )
    {
        res += it->first;
        res += to_string(it->second);
    }
    return res;
}

string mult(string a, int n)
{
    string res = "";
    for(int i=0; i<n; i++)
    {
        res += a;
    }
    return res;
}

string decrypt(string s)
{
    string res = "";
    int num = 0;
    string t = "";
    for(char c:s)   
    {
        if(isalpha(c))
        {
            res += mult(t, num);
            t = c;
        }
        else
        {
            num = num*10;
            num = c-'0';
        }
    }
    res += mult(t, num);
    return res;
}

int solve()
{
  string s;
  cin>>s;
  string encrypted = encrypt(s);
  cout<<encrypted<<endl;
  string decrypted = decrypt(encrypted);
  cout<<decrypted<<endl;
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}