/*
ID: singh221
TASK: friday
LANG: C++14
PROG: friday                 
*/
#include <bits/stdc++.h>
using namespace std;

int isLeap(int n)
{
    if (n%400==0 || (n%100!=0 && n%4==0))
    {
        return 1;
    }
    return 0;
}

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n;
    fin>>n;
    vector<int>res(7 ,0);
    int start = 0;
    int yr = 1900;
    int dur[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<12; i++)
        {
            int thirteenth = (start + 5)%7;
            res[thirteenth]++;
            int duration=dur[i] + ((i==1)*isLeap(1900+j));
            start = (start + (duration%7))%7;
        }
    }

    for(int i=0; i<7; i++)
    {
        int k = (5 + i)%7;
        if(i==6)
        {
            fout<<res[k];
            break;
        }
        fout<<res[k]<<" ";
    }
    fout<<"\n";

    return 0;
}