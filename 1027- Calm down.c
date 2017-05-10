/************************************************************************
***   Problem No    : 1027                                            ***
***   Problem Name  : Calm down                                       ***
***   Type          : Ad-hoc                                          ***
***   Author        : Al-Amin                                         ***
***   E-mail        : ialamin.pro@gmail.com/alamin.iyakub@diu.edu.bd  ***
***   University    : DIU, Dept. of CSE                               ***
***   Facebook      : http://www.facebook.com/alamin25                ***
************************************************************************/
#include<stdio.h>
int main()
{
    int a,i,j;
    double x,R,B,res,pi=2*acos(0.0);
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lf%lf",&R,&B);
        x=(sin(pi/B));
        res=x*(1+x);
        printf("Case %d: %lf\n",i,res);
    }

    return 0;
}
