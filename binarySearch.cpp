#include<bits/stdc++.h>
using namespace std;

int binSearch(int *A, int n, int x)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(x==A[m])
        {
            return m;
        }
        else if(A[m]<x)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return -1;
}