/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

// Fungsi untuk menghitung besar potongan
float hitungPotongan(float totalPembelian) {
    float diskon = 0.0;

    if (totalPembelian > 1000000 && totalPembelian <= 3000000) {
        diskon = 0.2; // Diskon 20%
    } else if (totalPembelian > 3000000) {
        diskon = 0.35; // Diskon 35%
    }

    return diskon * totalPembelian;
}

int main() {
    float totalPembelian, besarDiskon, besarYangHarusDibayarkan;

    // Input total pembelian dari pengguna
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.): ");
    scanf("%f", &totalPembelian);

    // Hitung besar diskon menggunakan fungsi hitungPotongan
    besarDiskon = hitungPotongan(totalPembelian);

    // Hitung besar yang harus dibayarkan setelah diskon
    besarYangHarusDibayarkan = totalPembelian - besarDiskon;

    // Output hasil proses
    printf("Besar Diskon    : Rp. %.2f\n", besarDiskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", besarYangHarusDibayarkan);

    return 0;
}
