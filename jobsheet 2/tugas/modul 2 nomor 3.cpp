/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    // Deklarasi variabel
    float panjang, lebar, luas;

    // Meminta input dari pengguna
    printf("Masukkan panjang persegi panjang: ");
    scanf("%f", &panjang);

    printf("Masukkan lebar persegi panjang: ");
    scanf("%f", &lebar);

    // Menghitung luas persegi panjang
    luas = panjang * lebar;

    // Menampilkan hasil
    printf("Luas persegi panjang adalah: %.2f\n", luas);

    return 0;
}