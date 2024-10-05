#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    if (sum < 0)
    {
        sum *= -1;
    }
    printf("%lld\n", sum);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;

//     scanf("%d", &n);

//     long long arr[n];

//     for(int i = 0; i < n; ++i) {
//         scanf("%lld", &arr[i]);
//     }

//     long long sum = 0;
//     for(int i = 0; i < n; ++i) {
//         sum += arr[i];
//     }

//     if(sum < 0) {
//         sum *= -1;
//     }

//     printf("%lld\n", sum);
//     return 0;
// }