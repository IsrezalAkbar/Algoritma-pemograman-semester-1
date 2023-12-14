/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    float alas, tinggi, luas;

    // Meminta pengguna memasukkan panjang alas
    printf("Masukkan panjang alas segitiga: ");
    scanf("%f", &alas);

    // Meminta pengguna memasukkan tinggi segitiga
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menampilkan hasil luas segitiga
    printf("Luas segitiga adalah: %f\n", luas);

    return 0;
}