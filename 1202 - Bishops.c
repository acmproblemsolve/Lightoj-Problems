#include <stdio.h>
int main()
{
    long long a,b,c,d,e,i;
    scanf("%lld",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lld%lld%lld%lld",&b,&c,&d,&e);
        if((b+c)%2!=(d+e)%2)
        printf("Case %lld: impossible\n",i);
        else if((b+c==d+e)||(b-c==d-e))
        printf("Case %lld: 1\n",i);
        else
        printf("Case %lld: 2\n",i);
    }
    return 0;
}
