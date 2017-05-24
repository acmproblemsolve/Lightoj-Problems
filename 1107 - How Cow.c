#include<stdio.h>
int main()
{
    int cas,x1,y1,x2,y2,cow,x,y,i,j,k;
    scanf("%d",&cas);
    for(i=1;i<=cas;i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&cow);
        printf("Case %d:\n",i);
        for(j=1;j<=cow;j++)
        {
            scanf("%d %d",&x,&y);
            if(x>x1 && x<x2 && y>y1 && y<y2)

                printf("Yes\n");


            else
                printf("No\n");

        }
    }
    return 0;
}
