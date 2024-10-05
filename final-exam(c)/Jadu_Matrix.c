#include <stdio.h>
int main()
{
    int row, col, flag = 1; 
    scanf("%d %d", &row, &col);
    int matrix[row][col];

    if (row == col) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        for (int p = 0; p < col; p++) {
            if (matrix[p][p] != 1) {
                flag = 0;
                break;
            }
        }
        for (int i = 0; i < row; i++) {
            if (matrix[i][row - 1 - i] != 1) {
                flag = 0;
                break;
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if ((i != j) && (j != row - 1 - i) && (matrix[i][j] != 0)) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0) {
                break;
            }
        }
        if (flag == 1) {
            printf("YES\n");
        } else {
            printf("NO\n"); 
        }
    } else {
        printf("NO\n"); 
    }
    return 0;
}