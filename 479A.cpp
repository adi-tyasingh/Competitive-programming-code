#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && c==1)
    {
        cout<<3;
    }
    else if (a==1 && b==1)
    {
        cout<< 2*c;
    }
    else if(a==1 && c==1)
    {
        cout<<(b+c+a);
    }
    else if (b==1 && c==1)
    {
        cout<< a*2;
    }
    else if(a==1)
    {
        cout<<(a+b)*c;
    }
    else if(b==1)
    {
        cout<<max((a+b)*c, a*(b+c));
    }
    else if(c==1)
    {
        cout<<a*(b+c);
    }
    else
    {
        cout<<a*b*c;    
    }
}