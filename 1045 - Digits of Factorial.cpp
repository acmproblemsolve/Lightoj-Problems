/************************************************************************
***   Problem No    : 1045                                            ***
***   Problem Name  : Digits of Factorial                             ***
***   Type          : Ad-hoc                                          ***
***   Author        : Al-Amin                                         ***
***   E-mail        : ialamin.pro@gmail.com/alamin.iyakub@diu.edu.bd  ***
***   University    : DIU, Dept. of CSE                               ***
***   Facebook      : http://www.facebook.com/alamin25                ***
************************************************************************/
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>

using namespace std;
int main()
{
    long long test,cases,i,number,base,num_digits;
    int size=1000010;
    double *fact = new double[size];

    for(i=1;i<= 1000000;i++)
        {
            fact[i] = log(i) + fact[i-1] ;
        }

    scanf("%lld",&test);
    for(cases = 1; cases <= test; cases++)
    {
        scanf("%lld %lld",&number,&base);
        num_digits = (fact[number]/log(base)+1);
        printf("Case %lld: %lld\n",cases,num_digits);
    }

    return 0;
}
