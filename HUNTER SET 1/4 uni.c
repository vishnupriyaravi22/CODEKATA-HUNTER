
#include <stdio.h>

int main(void)
{
	int a[100],n,i,j,c=0,t[100];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
		if(a[i]==a[j])
		{
			c++;
		            t[j]=0;
		}
	}
	if(t[i]!=0)
	{
		t[i]=c;
	}
	}
	
	for(i=0;i<n;i++)
	{
		if(t[i]==1)
		{
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
