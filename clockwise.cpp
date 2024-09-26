#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vec = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    int left = 0,right = 5, top = 0, bottom = 5;
    int action = 0;
    while (left<right && top<bottom){
        if (action == 0) //left to right
        {
            int i=left,j=right;
            for(i=left;i<right;i++)
            {
                cout<<vec[top][i]<<" ";
                
            }
            top++;
        }
        else if (action==1)
        {
            int j=bottom;
            for(int i=top;i<j;i++)
            {
                cout<<vec[right-1][i]<<" ";
            }
            right--;
        }
        else if (action==2)
        {
            int j = left;
            for(int i=right-1;i>j;i--)
            {
                cout<<vec[r][i]<<" ";
            }
            right--;
        }
    }

}