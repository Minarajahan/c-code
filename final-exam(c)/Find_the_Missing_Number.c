#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        long long int mul=b*c*d;
        long long int ans=a/mul;
        if(ans*mul==a)
        {
            printf("%lld\n",ans);
        }
        else{
            printf("-1\n");
        }
    }
    // testcase input
    // variable declare
    // input this variable
    // multiapplication
    // findout missing number
    // condition apply
    // finally print

    return 0;
}