#include <stdio.h>
#include <math.h>

int main(){
    int i, j, k, num, test, kase = 0;
    scanf("%d",&test);
    while(test--){
        double v1, v2, v3, a1, a2, d, dis_cover, t1, t2;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);

        t1 = v1 / a1;
        t2 = v2 / a2;

        double T;
        if(t1 >= t2) T = t1;
        else
            T = t2;

        dis_cover = T * v3;
        double s1, s2;
        s1 = (v1*v1) / (2*a1);
        s2 = (v2*v2) / (2*a2);
        d = s1 + s2;
        printf("Case %d: %lf %lf\n",++kase,d,dis_cover);
    }
}
