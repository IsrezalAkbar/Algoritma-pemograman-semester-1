/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    // Deklarasi variabel
    float presensi, praktek, uts, uas;
    float nilai_akhir;

    // Input nilai presensi, praktek, UTS, dan UAS
    printf("Masukkan Nilai Presensi: ");
    scanf("%f", &presensi);
    printf("Masukkan Nilai Praktek: ");
    scanf("%f", &praktek);
    printf("Masukkan Nilai UTS: ");
    scanf("%f", &uts);
    printf("Masukkan Nilai UAS: ");
    scanf("%f", &uas);

    // Menghitung nilai akhir
    nilai_akhir = (presensi * 0.10) + (praktek * 0.20) + (uts * 0.30) + (uas * 0.40);

    // Menampilkan nilai akhir
    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    return 0;
}
