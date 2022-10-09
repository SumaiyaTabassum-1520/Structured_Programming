#include<stdio.h>
int main()
{
    int i,t,r,a,b,c,temp;
    scanf("%d",&r);
    for(t=1 ; t<=r ; t++)
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("case %d: ",t);

        for(i=1 ; i<3 ; i++)
        {
            if (a>b)
            {
                temp=a;
                a=b;
                b=temp;

            }
            if (b>c)
            {
                temp=b;
                b=c;
                c=temp;

            }
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}

