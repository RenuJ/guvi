#include<stdio.h>
int main()
{
  int j,r,i=0;
  printf("Enter the cards picked up by Patrick:\n");
  scanf("%d",&j);
  while(j!=999)
  {
    r=2;
    while(i<j)
    {
        if(j%r==0)
        break;
        r++;
    }
    if(r==j)
    {
      i=i+r;
    }
 scanf("%d",&j);
  }
    printf("The credit points is %d",i);
    return 0;
  }
