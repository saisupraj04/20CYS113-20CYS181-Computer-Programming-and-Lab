#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        for (k = 9; k >= 9 - (2 * i - 2); k--) {
            printf("%d ", k);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (k = 9; k >= 9 - (2 * i - 2); k--) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
