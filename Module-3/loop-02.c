#include<stdio.h>
int main()
{
    int i;
    // first step(i=10;) initialization//
    // second step (i<=14;)apply condition//
    // third step (i=i+1;)apply increment/decriment//
    // This one for decriment
    
    for(i=10; i>=1; i=i-1)
    {
        printf("%d\n",i);
    }
    return 0;
}