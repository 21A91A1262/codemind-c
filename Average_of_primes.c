#include<stdio.h>
int f(int n)
{
    int i,fc=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,x=0,i,a[100];
    float s=0,r=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(f(a[i]))
        {
            s+=a[i];
            x++;
        }
    }
    r=s/x;
    printf("%.2f",r);
}