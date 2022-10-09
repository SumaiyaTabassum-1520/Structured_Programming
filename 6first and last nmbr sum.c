#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,t,lastDigit,firstDigit,sum;
    scanf("%d",&i);
    for(t=1 ; t<=i ; t++)
    {
        scanf("%d",&n);
        lastDigit=n%10;
        int po=log10(n);
        firstDigit=n/pow(10,po);
        sum= lastDigit+firstDigit;
        printf("sum = %d\n",sum);
    }

    return 0;
}

