#include<stdio.h>
int main()
{
    int n,n1,r,ans=0;
    scanf("%d",&n);
    n1= n;
    while (n1!=0)
    {
        r= n1%10;
        ans= ans+r*r*r;
        n1= n1/10;
    }
    if(ans==n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
    return 0;
}
