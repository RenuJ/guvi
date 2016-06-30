#include<stdio.h>
int main()
{
  int x1,y1,x2,y2;
  float x5,x6;
 printf("Enter x1\n");
  scanf("%d",&x1);
  printf("Enter y1\n");
  scanf("%d",&y1);
  printf("Enter x2\n");
  scanf("%d",&x2);
  printf("Enter y2\n");
  scanf("%d",&y2);
 x5=(x1+x2)/2.0;
  x6=(y1+y2)/2.0;
  printf("Resort is located at (%0.1f , %0.1f) ",x5,x6);
  return 0;
}
