#include<stdio.h>
int main()
{
    int i,n,t,r;
    scanf("%d",&r);
    for(t=1 ; t<=r ; t++)
    {
        scanf("%d",&n);
        printf("case %d: ",t);

        for(i=1 ; i<n ; i++)
        {
            if(n%i==0)
                printf("%d ",i);
        }
        printf("%d\n",i);

    }
    return 0;
}

