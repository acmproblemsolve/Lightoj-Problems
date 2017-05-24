#include <stdio.h>

int main(){
    long long i,j,T,n,E;

    scanf("%lld",&T);
    for(i=1;i<=T;i++)
        {
        scanf("%lld",&n);
        printf("Case %lld: ",i);
        E=1;
       for(j=1;j<=n;i++)
            {
            if(n%2==0)
                {
                E=E*2;
                n=n/2;
                if(n%2!=0)
                    {
                    printf("%lld %lld\n",n,E);
                    break;
                    }
                }
            else
              {
                printf("Impossible\n");
                break;
              }
           }
       }
    return 0;
}
