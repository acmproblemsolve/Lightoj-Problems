#include<stdio.h>
int main()
{
    int T,P,L,i,Q;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&P,&L);
        Q=P-L;
        if(L<Q)
        {
        printf("Case %d: %d\n",i,Q);
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
