#include<stdio.h>
int main()
{
    int i,n,arr[100],s=0,k,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&k,&p);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=k && arr[i]<=p)
        {
            continue;
        }
        s+=arr[i];
    }
    printf("%d",s);

    
}