#include<stdio.h>
int main()
{
    int a,b,T,i,res;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&a,&b);
        res=a+b;
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
