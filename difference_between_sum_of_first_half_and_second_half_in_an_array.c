 #include<stdio.h>
 int main()
 {
     int n,a[100],i,s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s1+=a[i];
    }
    for(i=n/2;i<n;i++)
    {
        s2+=a[i];
    }
    if(s1>s2)
    {
        printf("%d",s1-s2);
    }
    else
    {
        printf("%d",s2-s1);
    }
 }