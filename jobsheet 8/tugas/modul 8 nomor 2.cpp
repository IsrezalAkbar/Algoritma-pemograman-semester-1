/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

// Deklarasi fungsi-fungsi
float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0; // Nilai default jika terjadi pembagian dengan nol
    }
}

int main() {
    float operand1, operand2;
    
    // Input operand dari pengguna
    printf("Masukkan operand pertama: ");
    scanf("%f", &operand1);
    
    printf("Masukkan operand kedua: ");
    scanf("%f", &operand2);

    // Menampilkan hasil perhitungan
    printf("\nHasil Penjumlahan: %.2f\n", tambah(operand1, operand2));
    printf("Hasil Pengurangan: %.2f\n", kurang(operand1, operand2));
    printf("Hasil Perkalian: %.2f\n", kali(operand1, operand2));
    printf("Hasil Pembagian: %.2f\n", bagi(operand1, operand2));

    return 0;
}
