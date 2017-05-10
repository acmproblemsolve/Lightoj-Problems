/************************************************************************
***   Problem No    : 1022                                           ***
***   Problem Name  : Circle in Square                                ***
***   Type          : Ad-hoc                                          ***
***   Author        : Al-Amin                                         ***
***   E-mail        : ialamin.pro@gmail.com/alamin.iyakub@diu.edu.bd  ***
***   University    : DIU, Dept. of CSE                               ***
***   Facebook      : http://www.facebook.com/alamin25                ***
************************************************************************/
#include<stdio.h>
int main()
{
    int T,i;
     double a,b,res,r,PI=2*acos(0.0);
     scanf("%d",&T);
     for(i=1;i<=T;i++)
   {
    scanf("%lf",&r);
    a=r*2;
    res=(a*a)-(PI*r*r);
    printf("Case %d: %0.2lf\n",i,res);
   }
return 0;
}
