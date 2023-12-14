/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    char namaPembeli[50];
    char namaBarang[50];
    float hargaSatuan;
    int jumlahBarang;
    float hargaTotal;

    // Meminta input dari pengguna
    printf("Masukkan nama pembeli: ");
    scanf("%s", namaPembeli);

    printf("Masukkan nama barang: ");
    scanf("%s", namaBarang);

    printf("Masukkan harga barang satuan: ");
    scanf("%f", &hargaSatuan);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlahBarang);

    // Menghitung harga total
    hargaTotal = hargaSatuan * jumlahBarang;

    // Menampilkan struk pembelian
    printf("\nStruk Pembelian:\n");
    printf("Nama Pembeli: %s\n", namaPembeli);
    printf("Nama Barang: %s\n", namaBarang);
    printf("Harga Satuan: %.2f\n", hargaSatuan);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Harga Total: %.2f\n", hargaTotal);

    return 0;
}
