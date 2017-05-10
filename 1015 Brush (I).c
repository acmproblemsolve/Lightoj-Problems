#include<stdio.h>
int main()
{
    int t,j,i,n,res,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        res=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);
            if(a>0)
                res=res+a;
        }
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
