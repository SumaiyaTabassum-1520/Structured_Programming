#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=1; i<=t ;i++)
    {
        scanf("%d",&n);
       if(n%2==1)
           printf("odd\n");
       else
        printf("even\n");
    }
       return 0;

}
