#include <stdio.h>

int main() {
    int tanlov, miqdor;
    int hisob = 0;

    while (1) {
        printf("\n1. Olma - 5000 so'm\n");
        printf("2. Banan - 12000 so'm\n");
        printf("3. Apelsin - 10000 so'm\n");
        printf("4. Hisobni ko'rish\n");
        printf("5. Xaridni yakunlash\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        if (tanlov >= 1 && tanlov <= 3) {
            printf("Miqdorini kiriting: ");
            scanf("%d", &miqdor);
            if (miqdor <= 0) {
                printf("Miqdor noto'g'ri!\n");
                continue;
            }
        }

        switch (tanlov) {
            case 1:
                hisob += 5000 * miqdor;
                printf("Olma qo'shildi.\n");
                break;
            case 2:
                hisob += 12000 * miqdor;
                printf("Banan qo'shildi.\n");
                break;
            case 3:
                hisob += 10000 * miqdor;
                printf("Apelsin qo'shildi.\n");
                break;
            case 4:
                printf("Joriy hisob: %d so'm\n", hisob);
                break;
            case 5:
                printf("Yakuniy hisob: %d so'm\n", hisob);
                printf("Xaridingiz uchun rahmat!\n");
                return 0;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
    return 0;
}
