#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int digit = x/1000;

    if(digit%2==0)
        printf("Even\n");
    else
    {
        printf("Odd\n");
    }
    return 0;
}