#include<stdio.h>
int main()
{
int i,s,e,s1=0;
scanf("%d",&s);
scanf("%d",&e);
if(s%2==0)
{
s++;
}
for(i=s;i<=e;i++)
{
sum1+=i;
}
printf("sum of odd numbers(%d-%d)=%d",s,e,s1);
return 0;
}
