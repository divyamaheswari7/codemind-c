#include<stdio.h>
int main()
{
    int i,n,c,a=0,b=1,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
    if(c==n)
    {
        cnt++;
    }
    a=b;
    b=c;
}
if(cnt==0)
{
    printf("False");
}
else
{
    printf("True");
}
}