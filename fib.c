#include<stdio.h>
#include<conio.h>
int main()
{
int n1=0,n2=1,n3,i,n);
clrscr();
printf("Enter the range");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<=1)
n3=i;
else
{
n3=n1+n2;
n1=n2;
n2=n3;
}
prrintf("%d\n",n3);
}
getch();
return 0;
}
