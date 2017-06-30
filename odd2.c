#include<stdio.h>
#includE<conio.h>
int main()
{
int n,i,odd=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
odd=odd+i;
}
printf("sum of odd numbers are:%d",odd);
getch();
return 0;
}
