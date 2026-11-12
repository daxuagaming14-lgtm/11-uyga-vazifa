#include <stdio.h>

int main() {
    int boshi, oxiri;
    int faqatUch = 0, faqatBesh = 0, ikkalasi = 0;

    printf("Boshlang'ich sonni kiriting: ");
    scanf("%d", &boshi);
    printf("Oxirgi sonni kiriting: ");
    scanf("%d", &oxiri);

    printf("3 ga ham, 5 ga ham bo'linadigan sonlar:\n");
    for (int i = boshi; i <= oxiri; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            ikkalasi++;
        } else if (i % 3 == 0) {
            faqatUch++;
        } else if (i % 5 == 0) {
            faqatBesh++;
        }
    }
    printf("\n\nFaqat 3 ga bo'linadiganlar soni: %d\n", faqatUch);
    printf("Faqat 5 ga bo'linadiganlar soni: %d\n", faqatBesh);
    printf("Ikkalasiga ham bo'linadiganlar soni: %d\n", ikkalasi);
    return 0;
}
