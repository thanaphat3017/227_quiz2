#include <stdio.h>
#include <string.h>

int main()
{
    int limit,n=0,m,b,c,i,j,arr[100],sw[100],a=0,check=0,add,l,r;
    scanf("%d",&limit);
    c=limit;
    b=c;
    while(c>0)
    {   arr[n]=c%10;
        c/=10;

         n++;
    }
    printf("%d",n);

    if(n%2!=0)
    check=1;

    if(check==1)
    {
        add=(n+1)/2;
        r=n-add;
    }
    else
    {
        add=(n)/2;

        r=n-add;
    }
    int check_num[r];








}
