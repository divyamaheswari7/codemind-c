#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                a[j]=1000;
            }
        }
        if(a[i]!=1000)
        {
            printf("%d ",a[i]);
        }
    }
}