#include<stdio.h>
int main()
{
    int ara[1000],n=1000,i,count=0;
    for(i=0 ; i<n ; i++)
    {
        ara[i]=n-i;
        if(ara[i]<=n)
        {
            printf("%d\t",ara[i]);
            count=count+1;
        }
        if(count==5)
        {
            printf("\n");
            count=0;
        }

    }

    return 0;
}
