#include<stdio.h>
int main()
{
	int a[10];
	int i,j,num,k;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=num;i++)
	{
		for(j=i+1;j<=num;j++)
		{
			for(k=i+2;k<=num;k++)
			{
			if(a[i]+a[j]==a[k])
			{
				printf("%d %d %d\n",a[i],a[j],a[k]);
			}
			}

		}
	}
	return 0;
}
