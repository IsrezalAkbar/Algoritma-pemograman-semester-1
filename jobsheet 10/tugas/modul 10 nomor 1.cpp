/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tebakangka, angkarandom, kesempatan = 0;
    char mainlagi;

    srand(time(NULL));

    do {
        angkarandom = rand() % 20 + 1;

        printf("Tebak nomor antara 1 dan 20: ");
        scanf("%d", &tebakangka);

        while (tebakangka != angkarandom) {
            kesempatan++;

            if (tebakangka < angkarandom) {
                printf("Nomor saya lebih besar!\n");
            } else {
                printf("Nomor saya lebih kecil!\n");
            }

            printf("Tebak lagi: ");
            scanf("%d", &tebakangka);
        }

        kesempatan++;
        printf("Selamat, Anda benar! Jumlah percobaan: %d\n", kesempatan);

        printf("Ingin bermain lagi? (y/n): ");
        scanf(" %c", &mainlagi);

        kesempatan = 0;

    } while (mainlagi == 'y' || mainlagi == 'Y');

    printf("Terima kasih telah bermain!\n");

    return 0;
}
