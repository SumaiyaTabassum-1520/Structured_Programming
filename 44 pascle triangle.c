#include<stdio.h>
int main()
{
    int i,j,k,t,n,r;
    printf("Enter the test case you want to try :");
    scanf("%d",&t);

    for(k=1 ; k<=t ; k++)
    {
        printf("Enter the number : ");
        scanf("%d",&n);
        for(j=1 ; j<=n ; j++)
        {
            for(i=1; i<=j ; i++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }

    }
    return 0;
}
