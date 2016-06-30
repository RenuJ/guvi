#include<stdio.h>
int main()
{
  int a,b,c,e;
  scanf("%d\n",&a);
  scanf("%d\n",&b);
  scanf("%d\n",&c);
  scanf("%d\n",&e);
  printf("%d,%d\n",a,b);
  printf("%d,%d\n",a,(b+e));
  printf("%d,%d\n",(a+c),(b+e));
  printf("%d,%d\n",(a+c),b);
   return 0;
   }
