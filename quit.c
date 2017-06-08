#include<stdio.h>
#include<conio.h>
void main()
{
char n;
int i;
 printf("print 1 to 5 again and again");
 while(1)
 {
 for(i=1;i<=5;i++)
 printf("\n%d",i);
 n=getch();
 if(n=='Q')
 exit(0);
 }
 }
 
