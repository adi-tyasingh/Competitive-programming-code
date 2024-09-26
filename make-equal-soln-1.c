#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(abs(a-b)%d==0 && abs(b-c)%d==0 && abs(a-c)%d==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}