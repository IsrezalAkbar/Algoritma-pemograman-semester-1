/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    int detik, jam, menit, sisa_detik;

    // Input jumlah waktu dalam detik
    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &detik);

    // Menghitung jam
    jam = detik / 3600;

    // Menghitung sisa detik setelah diubah menjadi jam
    sisa_detik = detik % 3600;

    // Menghitung menit
    menit = sisa_detik / 60;

    // Menghitung sisa detik setelah diubah menjadi menit
    sisa_detik = sisa_detik % 60;

    // Menampilkan hasil konversi
    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, sisa_detik);

    return 0;
}
