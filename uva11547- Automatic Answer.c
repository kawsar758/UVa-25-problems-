
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,p,t;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%d",&n);
        p=n*315+36962;
        if (p<0)
        p=abs(p);
        printf("%d\n",(p/10)%10);
    }

    return 0;
}
