#include <stdio.h>

int main() {
    int tanlov, son;
    int soni = 0, yigindi = 0, engKatta = 0, engKichik = 0;

    while (1) {
        printf("\n1. Son kiritish\n");
        printf("2. Kiritilgan sonlar sonini ko'rish\n");
        printf("3. Sonlar yig'indisini ko'rish\n");
        printf("4. Eng katta sonni ko'rish\n");
        printf("5. Eng kichik sonni ko'rish\n");
        printf("6. Dasturdan chiqish\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        if (tanlov >= 2 && tanlov <= 5 && soni == 0) {
            printf("Hali birorta son kiritilmagan!\n");
            continue;
        }

        switch (tanlov) {
            case 1:
                printf("Sonni kiriting: ");
                scanf("%d", &son);
                if (soni == 0) {
                    engKatta = son;
                    engKichik = son;
                } else {
                    if (son > engKatta) engKatta = son;
                    if (son < engKichik) engKichik = son;
                }
                soni++;
                yigindi += son;
                break;
            case 2:
                printf("Kiritilgan sonlar soni: %d\n", soni);
                break;
            case 3:
                printf("Sonlar yig'indisi: %d\n", yigindi);
                break;
            case 4:
                printf("Eng katta son: %d\n", engKatta);
                break;
            case 5:
                printf("Eng kichik son: %d\n", engKichik);
                break;
            case 6:
                printf("Dastur tugadi.\n");
                return 0;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
    return 0;
}
