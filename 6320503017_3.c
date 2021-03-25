#include <stdio.h>

int pow(int x,int y)
{
    int i,p=1;
    if(y==0)
    {
        return 1;
    }

    for(i=0; i<y; i++)
    {
        p*=10;


    }

    return p;
}

int main()
{
    int limit,n=0,a=0,r,check=0,add,ter=10,i,c,j,b=0,d,h;
    scanf("%d",&limit);
    c=limit;
    d=limit;
    while(c>0)
    {
        c/=10;
        b++;
    }

    if(b%2!=0)
        check=1;

    if(check==1)
    {
        add=(b+1)/2;
        r=b-add;
    }
    else
    {
        add=(b)/2;
        r=b-add;

    }
    int check_num,cen,ans1,ans2=0,reult;


    check_num=limit%pow(10,r);
    d/=10*r;

    cen=d%10;

    for(i=1; i<=b-1; i++)
    {
        h=i/2;
        if(i==2)
            h=0;


        ans1 +=  pow(10,h);

    }
    ans1 *=9;

    for(i=0; i<=check_num; i++)
    {
        ans2 += i;
    }

    if(check==1)
        ans2 += cen;
    if(limit>9)
        reult=ans2+ans1;
    else
        reult=limit;


    printf("%d",reult);
}













