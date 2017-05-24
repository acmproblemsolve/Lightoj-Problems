#include <stdio.h>
#include <math.h>

int main(){
    double i, j, k;
    int num, test, kase = 0;

    scanf("%d",&test);
    while(test--){
        double r1, r2, r3;

        scanf("%lf %lf %lf",&r1,&r2,&r3);
        double a, b, c, d, e, f;
        a = r1 + r2;
        b = r2 + r3;
        c = r3 + r1;

        double triangle, p;
        p = (a+b+c) / 2;
        triangle = sqrt( p*(p-a)*(p-b)*(p-c) );

        d = ( (a*a)+(c*c) - (b*b) ) / (2*a*c);
        d = acos(d);
        e = ( (a*a)+(b*b) - (c*c) ) / (2*a*b);
        e = acos(e);
        f = ( (c*c)+(b*b) - (a*a) ) / (2*c*b);
        f = acos(f);

        i = (d/2) * (r1*r1);
        j = (e/2) * (r2*r2);
        k = (f/2) * (r3*r3);
        double tot = i + j + k;
        double res = triangle - tot;
        printf("Case %d: %lf\n",++kase,res);
    }
}
