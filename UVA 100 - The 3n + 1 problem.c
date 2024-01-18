#include<stdio.h>
int main()
{
    int a,b,n,count,Max,temp;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d %d ", a, b);
        if(a>b)
        {
            temp=b;
            b=a;
            a=temp;
        }
        Max=0;
        while(a<=b)
        {
            count=1;
            n=a;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else if(n%2!=0)
                {
                    n=(3*n)+1;
                }
                count++;
            }
            if(count>Max)
            {
                Max = count;
            }
            a++;
        }
        printf("%d\n", Max);
    }
    return 0;
}
