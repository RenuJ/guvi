#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n=2,f=1;
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("the fact of %d is %d",n,f);
getch();
}
