#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;1<=(a*b);i++)
    {
        if(i%a==0&&i%b==0)
        break;
    }
    printf("%d",i);
}