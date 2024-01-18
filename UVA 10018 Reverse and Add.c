#include<stdio.h>
int main()
{
    long long int test,sum,tem,num,count;
    scanf("%lld",&test);
    while(test--){
            count=0;
        scanf("%lld",&num);
        while(1){
            tem=num;
            sum=0;
        while(num!=0){
            sum=sum*10+num%10;
            num=num/10;
        }
        if(sum==tem){
            break;
        }
    else{
       num=sum+tem;
       count++;
        }
      }
       printf("%lld %lld\n",count,sum);
    }

    return 0;
}
