#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int T;
   scanf("%d",&T);
   for(int i=0; i<T; i++)
   {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int flag = 0;
    for(int i=0;i<n; i++)
    {
        if(a[i] == x)
       {
         flag++;
        break;
       }
    }
    if (flag==0)
    {
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

}
    return 0;
} 