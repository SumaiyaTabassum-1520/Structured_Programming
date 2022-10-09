#include<stdio.h>
int main()
{
    char str1[1000], ch;
    int t,i,n;
    scanf("%d",&n);
    for(t=1 ; t<=n ; t++)
    {
        int count=0;
        fflush(stdin);
        gets(str1);
        scanf("%c",&ch);

        for (i=0 ; str1[i]!=0 ; i++)
        {
            if(str1[i]==ch)
            {
                count=count+1;
            }

        }

        if (count==0)
        {
            printf("'%c' is not present\n",ch);
        }
        else
        {
            printf("Occurrence of '%c' in '%s' = %d\n",ch,str1,count);

        }
    }
    return 0;
}
