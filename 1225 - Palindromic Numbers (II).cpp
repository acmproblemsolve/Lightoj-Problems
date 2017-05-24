#include<stdio.h>
int main()
{
int n,m,b,cases,res,ct=1;
scanf("%d",&cases);
while (cases--){
	res=0;
scanf("%d",&n);
b=n;
while( n != 0 )
{
	res=res*10;
    res=res+n%10;
    n=n/10;
}
printf("Case %d: ",ct++);
    if(res==b)
     printf("Yes\n");
       else
            printf("No\n");
 }
	    

    return 0;
}
