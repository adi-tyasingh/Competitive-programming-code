#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,B,C,D,ans;
    cin>>A>>B>>C>>D;
    A=A%1000;
    B=B%1000;
    C=C%1000;
    D=D%1000;
    ans=(A*B*C*D)%100;
    if(ans>=0&&ans<=9)
    {
        cout<<"0"<<ans;
    }
    else
    {
        cout<<ans;
    }
}