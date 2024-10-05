#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int one=0,two=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
           one++;
        }
        else if(a[i]%3==0)
        {
            two++;
        }
    }
    printf("%d %d",one,two);
    return 0;
}