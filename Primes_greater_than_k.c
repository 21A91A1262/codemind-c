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
    int n,x,c=0,i,a[100];
    float r=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(f(a[i]))
        {
            if(a[i]>=x)
            {
                c++;
            }
        }
    }
    
    printf("%d",c);
}