#include<stdio.h>
void checkEven(int); 
int main()
{
  int h;
  scanf("%d",&h);
  checkEven(h); 
  return 0;
}
void checkEven(int h)
{
  if(h>=100&&h<=999)
  {
    if(h%2==0)
    {
      printf("yes");
    }
    else
    {
      printf("no");
    }
  }
  else if(h>=10&&h<=99)
  {
    printf("no");
  }
  else if(h>999)
  {
    printf("no");
  }
  else
  {
    printf("no");
  }
}
