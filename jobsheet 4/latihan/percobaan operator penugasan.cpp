/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    int a, b;

    // pengisian nilai dengan operator =
    a = 5;
    b = 10;

    // pengisian sekaligus penambahan
    b += a; // ini sama seperti b = b + a
    printf("Hasil b += a adalah %d\n", b);

    // pengisian sekaligus pengurangan
    b -= a; // ini sama seperti b = b - a
    printf("Hasil b = a adalah %d\n", b);

    // pengisian sekaligus perkalian
    b *= a; // ini sama seperti b = b * a
    printf("Hasil b *= a adalah %d\n", b);

    // pengisian sekaligus pembagian
    b /= a; // ini sama seperti b = b / a
    printf("Hasil b /= a adalah %d\n", b);

    // pengisian sekaligus sisa bagi
    b %= a; // ini sama seperti b = b % a
    printf("Hasil b %%= a adalah %d\n", b);
}
