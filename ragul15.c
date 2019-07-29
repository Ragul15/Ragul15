#include <stdio.h>
#include<string.h>
int main()
{
    char n[1000000];
    int i,j,r,s,count=0,x=0;
    scanf("%[^\n]s",n);
    r=strlen(n);
     for(i=0;n[i]!='\0';i++)
    {
        if(n[i]==' ')
        {
            count=0;
            s=i;
        for(i=i-1;i>=x;i--)
        {
        printf("%c",n[i]);
        }
        i=s;
        x=s;
        count++;
        printf(" ");
        }
    }
    if(count==1)
    {
        for(j=strlen(n);j>s;j--)
        {
            printf("%c",n[j]);
        }
    }
    if(count==0)
    {
        for(i=r-1;i>=0;i--)
        {
            printf("%c",n[i]);
        }
    }
    return 0;
}
