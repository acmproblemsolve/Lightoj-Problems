#include <stdio.h>
int main()
{
    long long cases,n,digit,i,remainder,num,count,ct=1,total;
    scanf("%lld",&cases);
    {
        while(cases--)
        {
            scanf("%lld%lld",&n,&digit);

            count=1;
            total=digit;
            for(i=0; ;i++)
            {
                if (total < n)
                    {
						total=total*10+digit;
                     	count++;
					}
                		remainder = total % n;
                		if( remainder == 0)
                    		break ;
                else
                    total=remainder;
            }
            printf("Case %lld: %lld\n",ct++,count);
        }
    }
    return 0;
}
