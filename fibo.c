#include<stdio.h>
 int main()
{
   int n,f=0,s=1,r,t;
    printf("Enter the number of terms\n");
   scanf("%d",&n);
    for (t=0;t<n;t++)
   {
      if (t<= 1 )
         r=t;
      else
      {
         r= f+s;
         f=s;
         s=r;
      }
      printf("%d\n",r);
   }
   return 0;
}
