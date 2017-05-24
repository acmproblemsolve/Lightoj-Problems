#include<stdio.h>
int fun(int n)
{
    if(n==1||n==0)
        return 0;
    return n-1-(n-1)/3;
}
int main()
{
    int a,b,i,t,res;
    scanf("%d",&t);
    for( i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
       res=fun(b)-fun(a);
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
