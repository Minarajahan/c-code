#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int k,m;
   scanf("%d %d",&k,&m);
   for(int i=1; i<=k;i++)
   {
    for(int j=1; j<=m; j++)
    printf("%d ",j);
    printf("\n");
   } 

    return 0;
}