
#include <stdio.h>

int main()
{
    int n,a[100];
    int count=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  
   
      

int temp =0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
               
            }
        }

    }
    
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("\n%d",a[i]);
				count=count+1;
			}
		}
	}
		if(count==0)
		{
			printf("\nUNIQUE");
		}
    

    return 0;
}
