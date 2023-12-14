/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    float total_pembelian;
    float diskon = 0;
    float cashback = 0;

    printf("Masukkan total pembelian (dalam Rupiah): ");
    scanf("%f", &total_pembelian);

    if (total_pembelian <= 75000) {
        diskon = total_pembelian * 0.05;
    } else if (total_pembelian > 75000 && total_pembelian <= 125000) {
        diskon = total_pembelian * 0.15;
    } else {
        diskon = total_pembelian * 0.25;
        cashback = 5000;
    }

    float total_harga = total_pembelian - diskon + cashback;

    printf("Total harga setelah diskon dan cashback: Rp. %.2f\n", total_harga);

    return 0;
}
