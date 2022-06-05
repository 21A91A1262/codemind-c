#include<stdio.h>
int main()
{
    int a,b,c,r=0;
    scanf("%d%d%d",&a,&b,&c);
    r=2*a*b*c*512;
    r=r/1024;
    printf("%dKB",r);
}