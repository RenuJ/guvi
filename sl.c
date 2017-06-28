#include<stdio.h>
#incliude<conio.h>
int main()
{
int r[100],i,s,l,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&r[i]);
}
l=s=a[0];
for(i=0;i<n;i++)
{
if(r[i]>l)
l=r[i];
if(r[i]<s)
s=r[i];
}
printf("%d is small:",s);
printf("%d  is high:",l);
getch();
return 0;
}
