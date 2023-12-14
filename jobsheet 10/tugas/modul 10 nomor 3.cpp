/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nim[15];
    char nama[50];
    char tgl_lahir[11];
    char alamat[100];
    char hp[15];
};

int main() {
    struct Mahasiswa data[100];
    int jumlah_data = 0;
    char tambah_data;

    do {
        printf("NIM\n: ");
        scanf("%s", data[jumlah_data].nim);

        printf("NAMA\n: ");
        scanf(" %[^\n]s", data[jumlah_data].nama);

        printf("TGL LAHIR\n: ");
        scanf("%s", data[jumlah_data].tgl_lahir);

        printf("ALAMAT\n: ");
        scanf(" %[^\n]s", data[jumlah_data].alamat);

        printf("HP\n: ");
        scanf("%s", data[jumlah_data].hp);

        jumlah_data++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &tambah_data);

    } while (tambah_data == 'y' || tambah_data == 'Y');

    printf("\nBentuk tampilan output:\n");

    for (int i = 0; i < jumlah_data; i++) {
        printf("%s\n", data[i].nim);
        printf("%s\n", data[i].nama);
        printf("%s\n", data[i].tgl_lahir);
        printf("%s\n", data[i].alamat);
        printf("%s\n", data[i].hp);

        if (i < jumlah_data - 1) {
            printf("--------------\n");
        }
    }

    return 0;
}
