#include<stdio.h>
int main()
{
  char a[50];
  float b,c;
  printf("Enter event :\n");
  scanf("%s",a);
  printf("Enter Start Time :\n");
  scanf("%f",&b);
  printf("Enter End Time :\n");
  scanf("%f",&c);
  printf("%s :",a);
  printf(" %0.2f AM to ",b);
  printf("%0.2f PM",c);
  return 0;
}
