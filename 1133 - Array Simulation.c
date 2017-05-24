#include<stdio.h>

int main()
{
    int t,v,j,i,k,n,d,c,z,s,m,num,x,y;
    int a[110],b[111];
    char str[10];
    scanf("%d",&t);
    for(v=1;v<=t;v++)
    {
        scanf("%d%d",&n,&m);
           for(j=0;j<n;j++)
            scanf("%d",&a[j]);
           for(k=0;k<m;k++)
            {
            scanf("%s",str);
            if(str[0]=='P')
            {
                scanf("%d%d",&x,&y);
                 z=a[x];
                 a[x]=a[y];
                 a[y]=z;

            }
            else if(str[0]=='R')
            {
                 for (i = n-1, d = 0; i >= 0; i--, d++)

                       b[d] = a[i];
                for (i = 0; i < n; i++)
                   a[i] = b[i];



            }
            else if(str[0]=='S')
            {
                scanf("%d",&num);
                for( i=0;i<n;i++)
                    a[i]=a[i]+num;
            }
            else if(str[0]=='M')
            {
                scanf("%d",&num);
                for( i=0;i<n;i++)
                    a[i]=a[i]*num;
            }
            else
            {

                scanf("%d",&num);
                for( i=0;i<n;i++)
                    a[i]=a[i]/num;
            }
        }
        printf("Case %d:\n",v);
        for(i=0;i<n-1;i++){
            printf("%d ",a[i]);}
        printf("%d\n",a[n-1]);
    }
    return 0;
}
