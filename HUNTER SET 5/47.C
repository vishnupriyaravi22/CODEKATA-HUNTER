#include <stdio.h>
int main()
{
    char s[100],t[100];
    int a=0,b=0,i;
    scanf("%[^\n]s",s);
    while(s[a]!='\0'){
        if(s[a]==' ')
        {
            i=a+1;
            if(s[i]!='\0')
            {
                while(s[i]==' ' && s[i]!='\0')
                {
                    if(s[i]==' '){
                        a++;
                    
                    }
                
                    i++;
                }
            }
        }
        t[b]=s[a];
        a++;
        b++;
    }
    
        t[b]='\0';
        printf("%s",t);
    return 0;
}
