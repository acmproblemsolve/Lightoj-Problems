#include <stdio.h>
int main()
{
    int i,t,m,n,res;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&m,&n);
         if(m==1||n==1)
         {
             res=m*n;
         }
        else if(m==2||n==2)
             {
                 res=m*n/8*4;

                 if((m*n)%8==2)
                    res=res+2;
                 if((m*n)%8==6||(m*n)%8==4)
                  res=res+4;
             }
             else if(m%2!=0&&n%2!=0)
             {
                 res=((m*n)/2+1);
             }
             else
             {
                res=(m*n)/2;
             }

             printf("Case %d: %d\n",i,res);
    }
    return 0;
}
