#include <stdio.h>
int main()
{
    int i,num[50],N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++)
    {
        if(num[i]%2==0&&i%2==1)
        {
            printf("%d ",num[i]);
        }
        if(num[i]%2==1&&i%2==0)
        {
            printf("%d ",num[i]);
        }
    }
    return 0;
}
