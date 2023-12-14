/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    int durasi;
    float tarif_pertama = 15000.0; // Tarif untuk 1 jam pertama
    float tarif_berikutnya = tarif_pertama * 0.5; // Tarif untuk jam berikutnya (50% dari tarif pertama)
    float total_biaya;

    printf("Masukkan durasi pemesanan (dalam jam): ");
    scanf("%d", &durasi);

    if (durasi >= 1) {
        // Menghitung biaya untuk 1 jam pertama
        total_biaya = tarif_pertama;

        // Menghitung biaya untuk jam-jam berikutnya (jika ada)
        if (durasi > 1) {
            total_biaya += (durasi - 1) * tarif_berikutnya;
        }

        printf("Total biaya yang harus dibayar: Rp %.2f\n", total_biaya);
    } else {
        printf("Durasi pemesanan harus minimal 1 jam.\n");
    }

    return 0;
}
