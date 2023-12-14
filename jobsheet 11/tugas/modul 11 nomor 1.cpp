/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    FILE *file;
    char nama[50], nim[15], jurusan[50], programStudi[50];
    int jumlahMahasiswa, i;

    file = fopen("datamahasiswa.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file datamahasiswa.txt\n");
        return 1;
    }

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("\nMasukan data mahasiswa ke-%d\n", i + 1);
        printf("Nama: ");
        scanf("%s", nama);
        printf("NIM: ");
        scanf("%s", nim);
        printf("Jurusan: ");
        scanf("%s", jurusan);
        printf("Program Studi: ");
        scanf("%s", programStudi);

        fprintf(file, "Data Mahasiswa ke-%d\n", i + 1);
        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %s\n", nim);
        fprintf(file, "Jurusan: %s\n", jurusan);
        fprintf(file, "Program Studi: %s\n", programStudi);
        fprintf(file, "\n");
    }

    fclose(file);

    printf("\nData mahasiswa telah disimpan dalam datamahasiswa.txt\n");

    return 0;
}
