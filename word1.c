#include<stdio.h>
#include<conio.h?
int main()
{
int c,k=1;
char abc[100];
clrscr();
printf("Enter the sentence"):
scanf("%[^\n]s",&abc);
for(c=0;abc[c]!='\0';c++)
{
if(abc[c]==' ')
k++;
}
printf("%d",k);
getch();
return 0;
}
