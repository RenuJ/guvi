#include<stdio.h>
int main()
{
 int x,y,side;
 scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&side);
  printf("%d,%d\n",(x+(side/2)),(y+(side/2)));
  printf("%d,%d\n",(x+(side/2)),(y-(side/2)));
  printf("%d,%d\n",(x-(side/2)),(y-(side/2)));
  printf("%d,%d\n",(x-(side/2)),(y+(side/2)));
         return 0;
         }
