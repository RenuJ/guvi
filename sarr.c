#include<stdio.h>
#include>conio.h>
int main()
{
int a[100],n,i,min,max,sum=0;
printf("Enter the range:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>min)
min=a[i];
if(a[i]<max)
max=a[i];
}
sum=min+max;
printf("Sum is:%d",sum);
getch();
return 0;
}
