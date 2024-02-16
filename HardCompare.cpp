#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d;
    long double sum1,sum2;
    cin>>a>>b>>c>>d;
    sum1=b*log10(a);
    sum2=d*log10(c);
    if(sum1>sum2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
