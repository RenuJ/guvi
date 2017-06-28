#include<stdio.h>
#include<conio.h>
int main()
{
int k;
scanf("%d",&k);
if(k<='1' && k<='9')
printf("%d is in a range",k);
else
printf("%d is not in a range",k);
getch();
return 0;
}
