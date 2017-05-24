#include <stdio.h>
#include <string.h>
int main ()
{
    int j,t,s,d=0,cases,ct=1,re[105];
    char a [100];
    scanf("%d",&cases);
    while(cases--)
    {
    scanf ("%d",&t);
    int i=0,s=0;
    while (t--)
     {
        scanf ("%s",&a);
        if (strcmp(a,"donate")==0)
        {
            scanf ("%d",&d);
            s+=d;
        }
        else
        {
          re[i]=s;
          i++;
        }
    }
    printf ("Case %d:\n",ct++);
    for(j=0;j<i;j++)
    printf ("%d\n",re[j]);
    }
    return 0;
}
