#include<stdio.h>
int main()
{ 
int n,k,a[100],i,temp;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(int i=0;i<=k;i++)
   {
   
         if(a[i]==k-1)
         {
         printf("%d ",a[i]);
         }
         if(a[i]==k+1)
         {
             printf("%d ",a[i]);
         }
         if(a[i]==k)
         {
             printf("%d ",a[i]);
         }
    }
 

return 0;
}
