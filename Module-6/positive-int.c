#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    int positiveSum=0,negativeSum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=0)
        {
           positiveSum=positiveSum+ar[i]; 
        }
        else
       {
         negativeSum=negativeSum+ar[i];
       }
    }
    printf("%d %d",positiveSum,negativeSum);
    return 0;
}
