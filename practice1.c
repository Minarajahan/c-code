#include <stdio.h>
int main()

{

    int i, j, a[5][5] = {0};

    for (i = 0; i < 5; i++)

    {

        a[i][0] = 1;

        a[i][i] = 1;
    }

    for (i = 2; i < 5; i++)

    {

        for (j = 1; j < i; j++)

        {

            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (i = 0; i <= 4; i++)

    {

        for (j = 0; j <= i; j++)

            printf("%d ", a[i][j]);

        printf("\n");
    }

    return 0;
}