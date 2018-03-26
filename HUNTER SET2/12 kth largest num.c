#include<stdio.h>

int main()
{

int n,k,i,a[100];
scanf("%d%d",&n,&k);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

int max;
max=a[0];
for(i=1;i<k;i++)
{
    if(max<a[i])
    max=a[i];
}

printf("%d",max);

return 0;
}
