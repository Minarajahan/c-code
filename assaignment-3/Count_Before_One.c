#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int N;
int count_before_one(int A[], int N)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            return count;
        }
        else
            count++;
    }
    return count;
}
int main()
{
    int i;
    scanf("%d", &N);
    int A[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int f;
    f = count_before_one(A, N);
    printf("%d", f);
    return 0;
}