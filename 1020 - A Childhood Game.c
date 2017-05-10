/************************************************************************
***   Problem No    : 1020                                            ***
***   Problem Name  : A Childhood Game                                ***
***   Type          : Ad-hoc                                          ***
***   Author        : Al-Amin                                         ***
***   E-mail        : ialamin.pro@gmail.com/alamin.iyakub@diu.edu.bd  ***
***   University    : DIU, Dept. of CSE                               ***
***   Facebook      : http://www.facebook.com/alamin25                ***
************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    long n,t,no=0;
    char s[7];
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%s",&n,s);
        if(strcmp(s,"Alice")==0)
        {
            if(n%3==1)
            printf("Case %d: Bob\n",++no);
            else
            printf("Case %d: Alice\n",++no);
        }
        else
        {
            if(n%3==0)
            printf("Case %d: Alice\n",++no);
            else
            printf("Case %d: Bob\n",++no);
        }
    }
    return 0;
}
