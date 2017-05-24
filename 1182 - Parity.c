    #include<stdio.h>
    int main()
    {
    int a,n,c[10000],i,sum,T,j;
    scanf("%d",&T);
    {
    for(j=1;j<=T;j++)
    {
    scanf("%d",&n);
    sum=0;
    for(i=0;n>0;i++)
    {
    c[i]=n%2;
    n=n/2;
    sum=sum+c[i];
    }
    if(sum%2==0)
    printf("Case %d: even\n",j);
    else
    printf("Case %d: odd\n",j);
    }
    }
    return 0;
    }
