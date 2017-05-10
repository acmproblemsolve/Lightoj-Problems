/************************************************************************
***   Problem No    : 1053                                            ***
***   Problem Name  : Higher Math                                     ***
***   Type          : Ad-hoc                                          ***
***   Author        : Al-Amin                                         ***
***   E-mail        : ialamin.pro@gmail.com/alamin.iyakub@diu.edu.bd  ***
***   University    : DIU, Dept. of CSE                               ***
***   Facebook      : http://www.facebook.com/alamin25                ***
************************************************************************/
#include <stdio.h>
int main()
{
    int i,t,a,b,c,a1,b1,c1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        a1=a*a;
        b1=b*b;
        c1=c*c;
        if((a1+b1)==c1||(a1+c1)==b1||(b1+c1)==a1)
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
    }
    return 0;
}
