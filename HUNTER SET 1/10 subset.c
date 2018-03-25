#include<stdio.h>
int main()
{
	int a[1000],b[1000];
	int i,j,n,m;
	int flag =0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=m;j++)
		{
		    if(a[i]==a[j])
		    {
		        flag = flag+1;
		    }
			
		}
		
	}
	if(flag=1)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	
		
	
	return 0;
}
