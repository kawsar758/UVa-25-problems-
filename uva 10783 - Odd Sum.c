#include<stdio.h>
int main(){
int tc;
int a,b,i;
scanf("%d",&tc);
int j=1;
while(tc--){
 int sum=0;
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i+=2)
 {
   if(i%2==0)
        i++;
   sum=sum+i;
 }
   printf("case %d: %d\n",j,sum);
   j++;
}



}
