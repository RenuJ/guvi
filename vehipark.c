#include<stdio.h>
int main()
{
  int a1,a2,a3,a4,a;
  scanf("%d\n",&a1);
  scanf("%d\n",&a2);
  scanf("%d\n",&a3);
  scanf("%d\n",&a4);
  scanf("%d\n",&a);
  if(a<a1)
  {
 printf("B1");
  }
  else if(a<a1+a2)
  {
    printf("B2");
  }
  else if(a<a1+a2+a3)
  {
    printf("B3");
  }
  else if(a<a1+a2+a3+a4)
  {
    printf("B4");
  }
  else
    printf("EXT");
 return 0;
}
