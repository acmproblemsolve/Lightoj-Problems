#include<stdio.h>
int main()
{
    long long a,b;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        printf("Case %d: ",i);
        printf("%lld\n",a/2*b);
    }
    return 0;
}
