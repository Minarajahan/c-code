
#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n,&i);
    if(n==1)
    {
        printf("-1\n");
    }
    else
    {
        for(i=1;i<=n;i=i+1);
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}