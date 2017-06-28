#include<stdio.h>
#include<conio.h>
int main()
{
int r[100],s=0,i,n;
float b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&r[i]);
}
for(i=0;i<n;i++)
{
s=s+r[i];
}
b=s/n;
printf("avg is %.2f=",b);
getch();
return 0;
}
