#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,r;
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
{
printf("#");
}
printf("\n");
}
getch();
return 0;
}
