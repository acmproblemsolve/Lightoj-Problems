#include<stdio.h>
int func(int num);
int main()
{
    int T,a,b,c,d,n[5],binary, decimal = 0, base = 1, rem;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int test=0;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&n[0],&n[1],&n[2],&n[3]);
        n[0]=func(n[0]);
        n[1]=func(n[1]);
        n[2]=func(n[2]);
        n[3]=func(n[3]);
        if((a==n[0])&&(b==n[1])&&(c==n[2])&&(d==n[3]))
            printf("Case %d: Yes\n",(i));
        else
            printf("Case %d: No\n",(i));
    }
    return 0;
}
int func(int num)
{
    int binary=num, decimal = 0, base = 1, rem;
    while(binary > 0)
    {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}
