#include <stdio.h>

int main() {
    const int JAMI = 20;
    int bosh = 20;
    int tanlov;

    while (1) {
        printf("\n1. Avtomobil kiritish\n");
        printf("2. Avtomobil chiqarish\n");
        printf("3. Bo'sh joylarni ko'rish\n");
        printf("4. Dasturdan chiqish\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1:
                if (bosh == 0) {
                    printf("Bo'sh joy qolmagan!\n");
                } else {
                    bosh--;
                    printf("Avtomobil kiritildi. Bo'sh joylar: %d\n", bosh);
                }
                break;
            case 2:
                if (bosh == JAMI) {
                    printf("Avtoturargoh bo'sh, chiqariladigan avtomobil yo'q!\n");
                } else {
                    bosh++;
                    printf("Avtomobil chiqarildi. Bo'sh joylar: %d\n", bosh);
                }
                break;
            case 3:
                printf("Bo'sh joylar soni: %d\n", bosh);
                break;
            case 4:
                printf("Dastur tugadi.\n");
                return 0;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
    return 0;
}
