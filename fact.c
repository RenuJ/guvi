#include<stdio.h>
int main()
{
    int n, i;
   fact=1;
    scanf("%d",&n);
    if (n>0)
       {
        for(i=1; i<=n; ++i)
        {   fact*=i;  
        }
        printf("Factorial of %d is",n,fact;
    }
return 0;
}
