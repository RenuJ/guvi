#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,a[100];
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
n=a[0];
for(i=0;i<10;i++)
{
if(a[i]>n)
n=a[i];
}
printf("%d is greatest",n);
getch();
return 0;
}
