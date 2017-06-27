#include<stdio.h>
#include<conio.h.
int main()
{
int c,k=0,n=0,r=0;
char abc[100];
scanf(%s",&abc);
for(c=0;abc[c]!=NULL;c++)
{
if((abc[c]>='A' && abc[c]<='Z') || (abc[c]>='a' && abc[c]<='z'))
k++;
else if(abc[c]>='0' && abc[c]<='9')
n++;
}
r=k+n;
printf("\n characters:%d numbers:%d alphanumeric:%d",k,n,r);
getch();
return 0;
}
