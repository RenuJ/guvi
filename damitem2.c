#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a<b)
  {
    if(b<c)
    {
      if(c>a)
      {
        printf("yes");
      }
    }
  else
  {
    printf("no");
  }
  }
    if(a>b)
  {
    if(b>c)
    {
      if(c<a)
      {
        printf("yes");
      }
    }
  
  else
  {
    printf("no");
  }
  }
  return 0;
  }
