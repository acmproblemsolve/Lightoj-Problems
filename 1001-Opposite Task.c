#include<stdio.h>
int main()
{
   int T,n,a,b,c,d,i;
    scanf("%d",&T);
     for(i=0;i<T;i++)
        {
            scanf("%d",&n);
            if(n%2==0)
            {
            a=n/2;
            b=n/2;
            printf("%d %d\n",a,b);
            }
            else
            {
             a=(n-1);
             d=(a/2+1);
             b=(n-1);
             c=b/2;
             printf("%d %d\n",d,c);
            }

        }

    return 0;
}
