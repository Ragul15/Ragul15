#include <stdio.h>
int main()
{
   int i,j,N,n[20];
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&n[i]);
   }
   for(i=0;i<N;i++)
   {
       for(j=i+1;j<N;j++)
       {
           if(n[i]+n[j]==0)
           {
               printf("%d %d\n",n[i],n[j]);
           }
       }
   }
    return 0;
}
