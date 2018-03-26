#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

char s[100];
scanf("%[^\n]s",s);

int i,j,k,temp;
int len;
len = strlen(s);
printf("%d",len);
for(i=0,j=0;j<len;j++)
{
    if(!isalnum(s[j]) || (j==len-1))
    {
        if(j<len-1)
        {
            k=j-1;
        }
        else
        {
            k=j;
        }
        
        while(i<k)
        {
           temp=s[i];
           s[i]=s[k];
           s[k]=temp;
           i++;
           k--;
        }
        i=j+1;
    }
}
        printf("%s",s);
 
return 0;
}
