#include<stdio.h>
int main()
{
    int T,i,a,l,b,d,n,res;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&a,&l);
        if(a<l)
        {
        a=6+3+5+5;
        b=l*4;
        res=a+b;
        printf("Case %d: %d\n",i,res);
        }
        else
        {
            d=(a-l)+a;
            b=d*4;
            a=19;
            res=a+b;
            printf("Case %d: %d\n",i,res);
        }

    }
    return 0;
}
