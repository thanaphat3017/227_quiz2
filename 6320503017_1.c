#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for(i=2;i<n;i++)
{
    if(i*i*i!=n)
    {
        printf("Not Cube Free");
        break;
    }

    else
    {
        printf("%d",i);
        break;
    }

}


}
