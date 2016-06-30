#include<stdio.h>
int main()
{
  int j;
  printf("Enter the height of the shot\n");
  scanf("%d",&j);
  if(j<50)
  {
    printf(":-(Aim High");
  }
  else if(j>90)
  {
    printf(":-(Aim Low");
  }
  else
  {
    printf("Hurray !!!");
  }
  return 0;
}
