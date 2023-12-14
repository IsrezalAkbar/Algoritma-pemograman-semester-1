/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>
#include <math.h>

int main() {
    char pilihan;
    double luas = 0.0;

    printf("Pilih bentuk geometri:\n");
    printf("a) Bola\n");
    printf("b) Kubus\n");
    printf("c) Balok\n");
    printf("d) Tabung\n");
    printf("Masukkan pilihan (a/b/c/d): ");
    scanf(" %c", &pilihan);

    switch(pilihan) {
        case 'a':
        case 'A':
            {
                double jari_jari;
                printf("Masukkan jari-jari bola: ");
                scanf("%lf", &jari_jari);
                luas = 4 * M_PI * jari_jari * jari_jari;
                break;
            }
        case 'b':
        case 'B':
            {
                double sisi;
                printf("Masukkan panjang sisi kubus: ");
                scanf("%lf", &sisi);
                luas = 6 * sisi * sisi;
                break;
            }
        case 'c':
        case 'C':
            {
                double panjang, lebar, tinggi;
                printf("Masukkan panjang balok: ");
                scanf("%lf", &panjang);
                printf("Masukkan lebar balok: ");
                scanf("%lf", &lebar);
                printf("Masukkan tinggi balok: ");
                scanf("%lf", &tinggi);
                luas = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
                break;
            }
        case 'd':
        case 'D':
            {
                double jari_jari_tabung, tinggi_tabung;
                printf("Masukkan jari-jari tabung: ");
                scanf("%lf", &jari_jari_tabung);
                printf("Masukkan tinggi tabung: ");
                scanf("%lf", &tinggi_tabung);
                luas = 2 * M_PI * jari_jari_tabung * (jari_jari_tabung + tinggi_tabung);
                break;
            }
        default:
            printf("Pilihan tidak valid!\n");
            return 1;
    }

    printf("Luas permukaan adalah: %lf\n", luas);
    
    return 0;
}
