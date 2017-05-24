#include<stdio.h>
#define PI 3.14159265
int main()
{
    double r,s,rad,kon,ox,oy,ax,ay,
    bx,by,c,d,e,f,g,h,b,a,r2=sqrt(2.0);
    int i,j,test;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",
        &ox,&oy,&ax,&ay,&bx,&by);
        r=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        a=r;
        b=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        e=1-((b*b)/(2*a*a));
        kon = acos(e)*180.0/PI;
        rad= (kon*PI)/180.0;
        s=r*rad;
        printf("Case %d: %lf\n",i,s);

    }
    return 0;
}
