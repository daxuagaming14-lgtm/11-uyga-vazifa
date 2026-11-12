#include <stdio.h>

int main() {
    long long n;
    int soni = 0, juft = 0, toq = 0, yigindi = 0;

    printf("Musbat butun son kiriting: ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("Musbat son kiriting!\n");
        return 0;
    }

    while (n > 0) {
        int raqam = (int)(n % 10);
        soni++;
        yigindi += raqam;
        if (raqam % 2 == 0) {
            juft++;
        } else {
            toq++;
        }
        n /= 10;
    }

    printf("Raqamlar soni: %d\n", soni);
    printf("Juft raqamlar: %d ta\n", juft);
    printf("Toq raqamlar: %d ta\n", toq);
    printf("Raqamlar yig'indisi: %d\n", yigindi);
    return 0;
}
