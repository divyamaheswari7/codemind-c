#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    scanf("%f%f%f",&a,&b,&c);
    float t;
    s=(a+b+c)/2;
    t=sqrt((s)*(s-a)*(s-b)*(s-c));
    printf("%0.2f",t);
}