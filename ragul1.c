#include <stdio.h>


int main()

{

    int a[20],i,j,k,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);

        }

    for(i=0;a[i]!='\0';i++)

    {

        for(j=0;a[j]!='\0';j++)

        {

            if(a[i]<a[j])

            {

            for(k=0;a[k]!='\0';k++)

            {

            if((a[i]+a[j])==a[k])

            {

                printf("%d %d %d\n",a[i],a[j],a[k]);

            }

            }

        }

    }

    }

    return 0;

}
