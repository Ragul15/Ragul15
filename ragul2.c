#include <stdio.h>
int main()
{
    int num,num1,num2,s[15],r[15],i,j,count=0,a;
    scanf("%d %d",&num1,&num2);
    for(i=0;i<num1;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<num2;i++)
    {
        scanf("%d",&r[i]);
    }
    num=num1>num2?num1:num2;
    a=num1>num2?num2:num1;
    for(i=0;i<num2;i++)
    {
        for(j=0;j<num;j++)
        {
            if(s[i]==r[j])
            {
                count++;
            }
        }
    }
    if(count==a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
