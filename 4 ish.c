#include <stdio.h>

int main() {
    int n;

    printf("1 dan 7 gacha son kiriting (0 - chiqish): ");
    scanf("%d", &n);

    while (n != 0) {
        switch (n) {
            case 1: printf("Dushanba\n"); break;
            case 2: printf("Seshanba\n"); break;
            case 3: printf("Chorshanba\n"); break;
            case 4: printf("Payshanba\n"); break;
            case 5: printf("Juma\n"); break;
            case 6: printf("Shanba\n"); break;
            case 7: printf("Yakshanba\n"); break;
            default: printf("Bunday hafta kuni mavjud emas\n");
        }
        printf("1 dan 7 gacha son kiriting (0 - chiqish): ");
        scanf("%d", &n);
    }
    printf("Dastur tugadi.\n");
    return 0;
}
