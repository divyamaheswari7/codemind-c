#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],min=a[0];
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]<min;
		min=a[i];
	}
	printf("%d",min);
	return 0;
}