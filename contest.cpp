#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arrElement,flag=-1;
    
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int numOperations=0;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arrElement;
            if(arrElement<0)
            {
                flag=1;
                sum+= -1*arrElement;
            }
            else
            {
                sum+=arrElement;
            }

            if(flag==1&&arrElement>0)
            {
                numOperations++;
                flag=0;
            }
        }
        if(arrElement<=0&&flag==1)
        {
            numOperations++;
            flag=0;
        }
         cout<<sum<<" "<<numOperations<<endl;
        t--;
    }
}
