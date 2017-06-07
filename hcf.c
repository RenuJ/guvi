#include<stdio.h>
void main()
{
int i,n1,n2,hcf=1,min;
scanf("%d%d",&n1,&n2);
min = (n1<n2) ? n1 : n2;
for(i=1;i<=min;i++)
{
if(n1%i==0 && n2%2==0)
{
hcf=i;
}
printf("hcf of %d and %d=%d\n,n1,n2,hcf);
}
}
