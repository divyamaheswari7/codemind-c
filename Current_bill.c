#include<stdio.h>
int main()
{
    int unit;
    scanf("%d",&unit);
    float bill,sr,tb;
    if(unit<200)
    {
        bill=unit*1.20;
    }
    else if(unit>=200&&unit<400)
    {
        bill=unit*1.50;
    }
    else if(unit>=400&&unit<600)
    {
        bill=unit*1.80;
    }
    else
    {
        bill=unit*2.00;
    }
    if(bill>=400)
    {
        sr=bill*0.15;
        tb=bill+sr;
        printf("%0.2f",tb);
    }
    else
    {
        tb=bill+100;
        printf("%0.2f",tb);
    }
}