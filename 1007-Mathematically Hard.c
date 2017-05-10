#include <stdio.h>
#define MAX 5000005
#define MIN -2147483647
int main()
{

    typedef unsigned long long int ll;

    int A[5000001],i,j,k,T,a,b,Case=0;
    ll B[5000001];
    A[1]=1;
    B[1]=0;
    scanf("%d",&T);
    for(k=1;k<=T;k++)
    {
        scanf("%d %d",&a,&b);
        for(i=2;i<=5000001;++i)
        {
            {
                if(A[i]==0)
               {
                    A[i]=i-1;
                    for(j=i+i;j<=5000001;j+=i)
                    {
                        if(A[j]==0)
                        {
                            A[j]=j;
                            A[j]=A[j]/i*(i-1);
                        }
                    }
                }
                        for(i=2;i<5000001;i++)
                        {
                            B[i]=A[i];
                            B[i]*=A[i];      //B[i]=B[i]*A[i]
                            B[i]+=B[i-1];    //B[i]=B[i]*B[i-1]
                        }
            }
                        printf("Case %d: %llu\n",k,B[b]-B[a-1]);
        }
    }
    return 0;

}
