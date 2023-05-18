#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            sum=i;
        }
        else
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("%d ",sum);
    }
    return 0;
}