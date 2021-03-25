#include<stdio.h>

int main()
{   int n,i,j,k,z,p,q,r,m;
    scanf("%d",&m);
    scanf("%d",&n);
    char text[m][70];
    int order[n][3];
    for( i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&order[i][j]);
        }
    }
     for( i=0;i<m;i++)
    {
        for(j=0;j<70;j++)
        {
            text[i][j]='o';
        }
    }

      for( i=0;i<n;i++)
    {
        p=order[i][0]-1;
        q=order[i][1]-1;
        r=order[i][2];
        for(j=0;j<r;j++)
        {
            text[p][q]='x';
            q++;
        }
    }
     for( i=0;i<m;i++)
    {
        for(j=0;j<70;j++)
        {
            printf("%c",text[i][j]);
        }
        printf("\n");
    }

}

