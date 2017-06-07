#include<stdio.h>
int main()
{
int n1,n2,min;
min=(n1<n2) ? n1:n2;
while(1)
{
if(min%n1==0 && min%n2==0)
{
printf("lcm of %d and %d=%d\n",n1,n2,min);
break;
}
++min;
}
return 0;
}
