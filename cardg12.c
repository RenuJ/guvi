#include<stdio.h>
int main()
{
  int a,b,r=1,j;
 printf("Enter the first card picked up by Patrick:\n");
  scanf("%d",&a);
   printf("Enter the second card picked up by Patrick:\n");
  scanf("%d",&b);
  j=a*r;
  while(j%b!=0)
  {
    r++;
    j=a*r;
  }
  printf("Patrick must choose next card with the number %d",j);
  return 0;
}
