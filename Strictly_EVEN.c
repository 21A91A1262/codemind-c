#include<stdio.h>
int main()
{
    int i,n,a[100],k,p;
    scanf("%d",&n);
      for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
    for(i=0;i<n;i++)
  {
      if(a[i]%2==0)
      {
          k++;
      }
      if(a[i]%2==0 && i%2==0)
      {
          p++;
      }
  }
       if(k==p)
      {
         printf("True"); 
      }
      else
      {
          printf("False");
      }
}