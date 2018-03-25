#include<stdio.h>
int main()
{
	int a[1000];
	int i,j,n;
	int x=0,y=0;
    int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			sum=a[i]+a[j];
			if(sum==0)
			{
			    x=a[i];
			    y=a[j];
			}
		}
		
	}
	
	printf("%d %d",x,y);
	
	
		
	
	return 0;
