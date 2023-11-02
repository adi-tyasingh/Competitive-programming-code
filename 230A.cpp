#include<bits/stdc++.h>
using namespace std;

bool sortbyCond(const pair<long long, long long>& a, const pair<long long, long long>& b) {
    return (a.first < b.first);
}

void solve()
{
    int s; cin>>s;
    int n; cin>>n;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        pair<int,int>pr = make_pair(x,y);
        vec.push_back(pr);
    }
    sort(vec.begin(),vec.end(),sortbyCond);
    
    for(int i=0;i<n;i++)
    {
        if(s<=vec[i].first)
        {
            cout<<"NO";
            return;
        }
        else
        {
            s += vec[i].second;
        }
    }
    cout << "YES";
    return;
}

int main()
{
    solve();
}