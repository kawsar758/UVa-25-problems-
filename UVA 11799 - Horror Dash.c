#include<stdio.h>
int main()
{
    int test,s,speed,max,count=0;
    scanf("%d", &test);
    while(test--)
    {
        speed=0;
        scanf("%d", &s);
        while(s--)
        {
            scanf("%d", &speed);
            if(max<speed)
            {
                max=speed;
            }
        }
        count++;
        printf("Case %d: %d\n", count, max);
    }
    return 0;
}
