#include<stdio.h>
int main()
{
    int i,n,t,count;
    char str[50];
    scanf("%d",&n);
    fflush(stdin);
    for(t=0 ; t<n ; t++)
    {
        gets(str);
        count=0;

        for(i=0; str[i]!=0 ; i++)
        {
            if(str[i]==' ')
            {
                count=count+1;
            }

        }
        count=count+1;
        printf("%d\n",count);

    }

return 0;
}

