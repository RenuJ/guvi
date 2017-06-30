#includE<stdio.h>
#include<conio.h>
int main()
{
int v=0,i;
char str[100];
scanf("%[^\n]s",&str);
for(i=0;a[i]!=0;i++)
{
if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') || (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'))
v=v+1;
}
printf("no of vowels are :%d",v);
getch();
return 0;
}
