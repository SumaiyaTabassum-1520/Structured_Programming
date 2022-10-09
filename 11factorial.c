#include<stdio.h>
int main()
{
    long long int i,n,j,t,fact;
    scanf("%d",&t);
    for(j=1 ; j<=t ; j++)
    {
        scanf("%d",&n);
        fact=1;
        for(i=n ; i>0 ; i--)
        {
            fact=fact*i;
        }
        printf("%lld",fact);
        printf("\n");
    }

    return 0;
}


