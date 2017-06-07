#inclde<stdio.h>
int main()
{
int n1,n2,i,min,hcf=1;
scanf("%d%d",&n1,&n2);
min= (n1<n2) ? n1:n2;
for(i=0;i<=min;i++)
{
if(n1%i==0 && n2%i==0)
{
hcf=i;
}
}
printf("hcf of %d and %d=%d\n",n1,n2,hcf);
return 0;
}
