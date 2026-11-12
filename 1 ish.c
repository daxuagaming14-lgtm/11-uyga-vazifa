#include <stdio.h>

int main() {
    for (int i = 1; i <= 15; i++) {
        printf("%d - %d", i, i * i);
        if (i == 5) {
            printf("  Besh");
        }
        printf("\n");
    }
    return 0;
}
