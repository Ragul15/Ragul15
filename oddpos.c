#include <stdio.h>
int main()
{
   char s[50];
   int i;
   scanf("%[^\n]s",s);
   for(i=0;i<=strlen(s);i=i+2)
   {
       s[i]=s[i]-32;
   }
   printf("%s",s);
    return 0;
}
