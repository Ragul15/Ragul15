#include<stdio.h>
int main()
{
    int num[30],i,j,temp,N,T;
    scanf("%d",&N);
    scanf("%d",&T);
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(num[i]<num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    {
      if(i==T-1)
    printf("%d",num[i]);
    }
    return 0;
}
