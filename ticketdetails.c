#include<stdio.h>
int main()
{
  int a,b;
  char n[50],m[50];
  float x,z;
  printf("\nTicket 1 :");
  printf("\nEnter Ticket Number :");
  scanf("%d",&a);
  printf("\nEnter Name :");
  scanf("%s",n);
  printf("\nEnter Ticket Cost :");
  scanf("%f",&x);
  printf("\nTicket 2 :");
  printf("\nEnter Ticket Number :");
  scanf("%d",&b);
  printf("\nEnter Name :");
  scanf("%s",m);
  printf("\nEnter Ticket Cost :");
  scanf("%f",&z);
  printf("\nTicket Details :");
  printf("\nTicket 1 :");
  printf("\nNumber : %d",a);
  printf("\nName : %s",n);
  printf("\nCost : %0.2f",x);
  printf("\nTicket 2 :");
  printf("\nNumber : %d",b);
  printf("\nName : %s",m);
  printf("\nCost : %0.2f",z); 
  return 0;
         }
