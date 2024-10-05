#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Coxsbazar\n");
        
        if(tk>=10000)
        {
            printf("Saintmartin\n");
        }
        else
        {
            printf("Return korbo");
        }
    }
    else
    {
        printf("Kothaw jabo na");
    }
    return 0;
}