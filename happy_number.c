#include<stdio.h>
int main()
{
    int r,n,i,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r*r;
        n=n/10;
        if(n==0&&s>=10)
        {
            n=s;
            s=0;
        }
    }
    if(s==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}