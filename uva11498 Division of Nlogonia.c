#include <stdio.h>
int main()
{
    int t,n,m,x,y,i;
    while(1)
    {
        scanf("%d",&t);
        if (t==0)
        {
            break;
        }
        scanf("%d %d",&n,&m);
        for (i=0;i<t;i++)
        {
           scanf("%d %d",&x,&y);
           if (x>n && y>m) {printf("NE\n");}
           else if (x<n && y>m) {printf("NO\n");}
           else if (x<n && y<m) {printf("SO\n");}
           else if (x>n && y<m) {printf("SE\n");}
           else if (x==n || y==m) {printf("divisa\n");}

        }
    }


    return 0;
}
