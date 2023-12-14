/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

// Deklarasi fungsi
float hitungLuas(float jariJari);
float hitungKeliling(float jariJari);

int main() {
    float jariJari;

    // Meminta pengguna memasukkan jari-jari lingkaran
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memanggil fungsi untuk menghitung luas dan keliling lingkaran
    float hasilLuas = hitungLuas(jariJari);
    float hasilKeliling = hitungKeliling(jariJari);

    // Menampilkan hasil
    printf("Luas lingkaran: %.2f\n", hasilLuas);
    printf("Keliling lingkaran: %.2f\n", hasilKeliling);

    return 0;
}

// Definisi fungsi untuk menghitung luas lingkaran
float hitungLuas(float jariJari) {
    return 3.14 * jariJari * jariJari;
}

// Definisi fungsi untuk menghitung keliling lingkaran
float hitungKeliling(float jariJari) {
    return 2 * 3.14 * jariJari;
}
