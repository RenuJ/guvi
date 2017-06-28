#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,s=0;
clrscr();
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
s=s+i;
}
if(s==n)
printf("%d is a perfect number",n);
else
printf("%d is a not perfect number",n);
getch();
return 0;
}
