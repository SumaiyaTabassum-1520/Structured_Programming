#include<stdio.h>
int main()
{
    float n,i,j,k,a,b,c;
    scanf("%f",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        j=b/(300-c)*6;
        k=((a+1-b)/c)*6;

        printf("%.2f %.2f",j,k);
        if(i!=n)
        {
            printf("\n");
        }

    }

    return 0;
}

