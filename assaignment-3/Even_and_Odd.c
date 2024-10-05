
#include <stdio.h>
void odd_even()
{
    int even = 0, odd = 0;
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d ", even);
    printf("%d\n", odd);
}
int main()
{
    odd_even();
    return 0;
}