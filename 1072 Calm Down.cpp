#include <stdio.h>
   #define PI acos(-1.0)

int main()
{
    int a,i,j;
    double x,r,n,res,pi=3.141592653589793;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lf%lf",&r,&n);
        x=(sin(pi/n));
        res=x*r/(1+x);
        printf("Case %d: %lf\n",i,res);
    }
 
    return 0;
}
