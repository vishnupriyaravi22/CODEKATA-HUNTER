#include <stdio.h>

int main()
{
    int n,i,a[100],pro=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pro=pro*a[i];
    }
   printf("%d",pro);
    
    return 0;
}
