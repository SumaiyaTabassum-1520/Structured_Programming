#include<stdio.h>
int main()
{
    int i,j,a,n,k;
    scanf("%d",&a);
    for(k=1; k<=a ; k++)
    {
        scanf("%d",&n);

        for(j=1 ; j<=n ; j++)
        {
            for(i=1 ; i<=n ; i++)
            {
                printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}


