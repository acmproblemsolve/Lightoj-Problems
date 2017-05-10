#include<stdio.h>
#include<math.h>
int main()
{
    int z, t;
    double d;
    unsigned long long int n, a, b, m, x, r;
    scanf("%d", &z);
    for(t=1;t<=z;t++)
    {
        scanf("%lld", &n);
        d=sqrt(n);
        a=d;
        if(d>a)
        {
            a++;
        }
        b=2*a-1;
        r=a*a;
        b=r-b;
        b++;
        m=(r+b)/2;
        if(r%2==0)
        {
            if(n<m)
            {
                x=n-b;
                x++;
                printf("Case %d: %lld %lld\n", t, x, a);
            }
            if(n>m)
            {
                x=r-n;
                x++;
                printf("Case %d: %lld %lld\n", t, a, x);
            }
            if(n==m)
            {
                x=r-m;
                x++;
                printf("Case %d: %lld %lld\n", t, x, x);
            }
 
        }
        else
        {
            if(n<m)
            {
                x=n-b;
                x++;
                printf("Case %d: %lld %lld\n", t, a, x);
            }
            if(n>m)
            {
                x=r-n;
                x++;
                printf("Case %d: %lld %lld\n", t, x, a);
            }
            if(n==m)
            {
                x=r-m;
                x++;
                printf("Case %d: %lld %lld\n", t, x, x);
            }
        }
    }
 
    return 0;
}
 
   
