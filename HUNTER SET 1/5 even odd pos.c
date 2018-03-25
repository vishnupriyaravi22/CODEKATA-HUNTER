#include <stdio.h>
 
int main()
{
    int n,a[100];
    int i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
 for(i=1;i<n;i+=2)
 {
     if(a[i]%2==0)
   	{
   		printf("\nodd pos %d even num %d ",i,a[i]);
   	   
    }
 
 } 
   for(i=0;i<n;i+=2)
   {
   	if(a[i]%2!=0)
   	{
   		printf("\neven pos %d odd num%d ",i,a[i]);
   	   
    }
 
   }
 
 
    return 0;
}
 
