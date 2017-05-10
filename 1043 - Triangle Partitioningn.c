/************************************************************************
***   Problem No    : 1043                                            ***
***   Problem Name  : Triangle Partitioningn                          ***
***   Type          : Ad-hoc                                          ***
***   Author        : Al-Amin                                         ***
***   E-mail        : ialamin.pro@gmail.com/alamin.iyakub@diu.edu.bd  ***
***   University    : DIU, Dept. of CSE                               ***
***   Facebook      : http://www.facebook.com/alamin25                ***
************************************************************************/
#include<stdio.h>
int main()
{
    int a,i;
    double div,ab,ac,bc,inverse,res,ratio;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&ratio);
        inverse=1.0/ratio;
        div=sqrt(inverse+1);
        res=(ab/div);
        printf("Case %d: %.10lf\n",i,res);
    }
    return 0;
}
