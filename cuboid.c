#include<stdio.h>
#include<conio.h>
int main()
{
double a,v,l,b,h;
scanf("%lf%lflf",&l,&b,&h);
a=(2*b*l)+(2*l*h)+(2*b*h);
v=l*b*h;
printf(" area is %.lf:",a);
printf("volume is %.lf:",v);
getch();
return 0;
}
