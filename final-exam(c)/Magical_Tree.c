#include <stdio.h>

void printTree(int N)
{
    int stars = 1;
    int line=6;
    int lineBarbe =N/2;
    int newLine=line+lineBarbe;

    for (int i = 0; i < newLine; i++)
    {
        for (int j = 0; j <line+lineBarbe-1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
        stars += 2;
        line=line-1;
    }

    int spaces = 5;
    for (int i = 0; i < spaces; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for(int j=0; j<N; j++)
        printf("*");
         printf("\n");
    }
   
}

int main()
{
    int N;
    scanf("%d", &N);

    printTree(N);

    return 0;
}