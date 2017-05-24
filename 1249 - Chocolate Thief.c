
#include <stdio.h>
#include <string.h>

int main()
{
    int T, kag = 0;
    long long i, n, l, h, w, fix, last, first, mid;
    char name[ 25 ], ff[ 25 ], mm[ 25 ], ll[ 25 ];
    scanf("%d", &T);
    while( T-- )
    {
        scanf("%lld", &n);
        mid = first = last = 0;
        if(n == 2)
        {
            scanf("%s %lld %lld %lld", mm, &l, &h, &w);
            fix = l * h * w;
            scanf("%s %lld %lld %lld", ff, &l, &h, &w);
            w = w * h * l;
            if(fix == w) printf("Case %d: no thief\n", ++kag);
            else if(fix > w) printf("Case %d: %s took chocolate from %s\n", ++kag, mm, ff);
            else printf("Case %d: %s took chocolate from %s\n", ++kag, ff, mm);
            continue;
        }
        for(i = 0; i < n; i++)
        {
            scanf("%s %lld %lld %lld", name, &l, &h, &w);
            if( !mid )
            {
                w = w * l * h;
                if( !last )
                {
                    last = w;
                    strcpy(ll, name);
                }
                else if(last != w && last && !first)
                {
                    first = w;
                    strcpy(ff, name);
                }
                else if(last != w && first != w && last && first && !mid)
                {
                    mid = w;
                    strcpy(mm, name);
                }
            }
        }

        if(last > first && last > mid)
        {
            if(first > mid) printf("Case %d: %s took chocolate from %s\n", ++kag, ll, mm);
            else printf("Case %d: %s took chocolate from %s\n", ++kag, ll, ff);
        }
        else if(first > last && first > mid)
        {
            if(last > mid) printf("Case %d: %s took chocolate from %s\n", ++kag, ff, mm);
            else printf("Case %d: %s took chocolate from %s\n", ++kag, ff, ll);
        }
        else if(mid > last && mid > first)
        {
            if(last > first) printf("Case %d: %s took chocolate from %s\n", ++kag, mm, ff);
            else printf("Case %d: %s took chocolate from %s\n", ++kag, mm, ll);
        }
        else printf("Case %d: no thief\n", ++kag);
    }
    return 0;
}
