#include<stdio.h>

int main() {
    long long int a,i,fn[10001],n,j,b,c,d,e,f, T;
    scanf("%d",&T);
    for(j=1;j<=T;j++){
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&n);
        fn[0]= a;
        fn[1]= b;
        fn[2]= c;
        fn[3]= d;
        fn[4]= e;
        fn[5]= f;
        for(i=6;i<=n;i++){
        fn[i]=( fn[i-1] + fn[i-2] + fn[i-3] + fn[i-4] + fn[i-5] + fn[i-6] )  % 10000007 ;
    }
        printf("Case %d: %lld\n",j,fn[i]%10000007);
    }
    return 0;
}
