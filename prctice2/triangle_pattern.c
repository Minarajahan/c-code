#include <stdio.h>

int main() {
    
    int n = 10;
    
    int arr[10][11];

 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i + 1; j++) {
            if (j == 0 || j == i + 1) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }

 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i + 1; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}