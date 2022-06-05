#include<stdio.h>
int main()
{
    int i,n,arr[100],x,y,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=x && arr[i]<=y)
        {
            continue;
        }
        else
        {
        printf("%d ",arr[i]);
        c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    
}