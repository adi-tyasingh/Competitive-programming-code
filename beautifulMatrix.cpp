#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,row,colum;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>x;
            if(x==1)
            {
                row=i;
                colum=j;
                break;
            }
        }
    }
    cout<<abs(row-3)+abs(colum-3)<<endl;
}