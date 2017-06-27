#include <stdio.h>
int main()
{
   int n,n1,r,ans=0;
   scanf("%d", &n);
   n1=n;
   while(n1!=0)
   {
      r=n1%10;
      ans=ans*10+r;
      n1=n1/10;
   } 
if(ans==n1) 
      printf("%d is a palindrome number",n1);
   else
      printf("%d is not a palindrome number",n1);
   return 0;
}
