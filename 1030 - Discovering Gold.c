/************************************************************************
***   Problem No    : 1030                                            ***
***   Problem Name  : Discovering Gold                                ***
***   Type          : Ad-hoc                                          ***
***   Author        : Al-Amin                                         ***
***   E-mail        : ialamin.pro@gmail.com/alamin.iyakub@diu.edu.bd  ***
***   University    : DIU, Dept. of CSE                               ***
***   Facebook      : http://www.facebook.com/alamin25                ***
************************************************************************/
#include<stdio.h>
int main()
{
    int T,k,i,j,x,r,c,n,m,y,g,A[1050][1050];
    scanf("%d",&T);
    for(k=1;k<=T;k++)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        {
          for(j=0;j<m;j++)
          {
            A[i][j]=0;
          }
        }
        scanf("%d",&g);
        for(i=0;i<g;i++){
            scanf("%d %d",&x,&y);
            A[x][y]=1;
            for(i=1;i<n;i++){
                for(j=0;j<m;j++){
                    r=0,c;
                if(i-1>=0&&i-1<n&&j-1>=0&&j-1<m){
            c=A[i-1][j-1]+A[i][j];}
            if(r<c){
                r=c;
                if(i-1>=0&&i-1<n){
                    c=A[i-1][j]+A[i][j];
                    if(r<c){
                        r=c;
                    }
                    }
                    }
                }
                if(i-1>=0&&i-1<n&&j+1>=0&&j+1<m){
                c=A[i-1][j+1]+A[i][j];
                if(r<c){
                    r=c;
                    A[i][j]=r;
                }
            }
            }
        }

      printf("%d",r);
    }
    return 0;
}
