#include<stdio.h>
int main()
{
    int i,b,w,c,a;
    scanf("%d%d%d%d",&i,&b,&w,&c);
    a=((i+2*w)*(b+2*w)-i*b)*c;
    printf("%d",a);
}