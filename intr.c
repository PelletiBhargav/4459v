#include<stdio.h>
void main()
{
    int i,star,space,j,n;
    scanf("%d",&n);
    star=1;
    space=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
        {
            printf("");
        }
        for(j=0;j<star;j++)
        {
            printf("*");
        }
        printf("\n");
        star=star+2;
        space=space-1;
    }
}