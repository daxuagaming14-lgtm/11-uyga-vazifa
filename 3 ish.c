#include <stdio.h>

int main() {
    long long n;
    int raqamlar[20];
    int soni = 0, yigindi = 0;

    printf("Musbat son kiriting: ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("Musbat son kiriting!\n");
        return 0;
    }

    while (n > 0) {
        raqamlar[soni] = (int)(n % 10);
        yigindi += raqamlar[soni];
        soni++;
        n /= 10;
    }

    // Raqamlar teskari tartibda saqlangan, shuning uchun oxiridan chiqaramiz
    int i = soni - 1;
    while (i >= 0) {
        printf("%d", raqamlar[i]);
        if (i > 0) printf(" + ");
        i--;
    }
    printf(" = %d\n", yigindi);
    return 0;
}
