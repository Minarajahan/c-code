#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);
        char a[n + 1];
        scanf("%s", a);

        int t = 0, p = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 'T') {
                t++;
            } else if (a[i] == 'P') {
                p++;
            }
        }

        if (t > p) {
            printf("Tiger\n");
        } else if (p> t) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}