/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

struct tanggal {
    int hari;
    int bulan;
    int tahun;
};

char* getZodiac(struct tanggal tanggallahir) {
    char* zodiak[] = {"CAPRICORN", "AQUARIUS", "PISCES", "ARIES", "TAURUS", "GEMINI", "CANCER", "LEO", "VIRGO", "LIBRA", "SCORPIO", "SAGITTARIUS"};
    
    struct tanggal tanggalzodiak[] = {{22, 12, 0}, {20, 1, 0}, {19, 2, 0}, {21, 3, 0}, {20, 4, 0}, {21, 5, 0}, {21, 6, 0}, {23, 7, 0}, {23, 8, 0}, {23, 9, 0}, {23, 10, 0}, {22, 11, 0}};
    
    for (int i = 0; i < 12; ++i) {
        if ((tanggallahir.bulan == tanggalzodiak[i].bulan && tanggallahir.hari >= tanggalzodiak[i].hari) || tanggallahir.bulan > tanggalzodiak[i].bulan) {
            return zodiak[i];
        }
    }
    
    return NULL;
}

int main() {
    struct tanggal tanggallahir;

    printf("Masukkan tanggal lahir [tgl-bln-tahun]: ");
    scanf("%d-%d-%d", &tanggallahir.hari, &tanggallahir.bulan, &tanggallahir.tahun);

    printf("Tanggal Lahir Anda [tgl-bln-tahun] : %02d-%02d-%04d\n", tanggallahir.hari, tanggallahir.bulan, tanggallahir.tahun);

    char* zodiak = getZodiac(tanggallahir);

    if (zodiak != NULL) {
        printf("Zodiak Anda adalah : %s\n", zodiak);
    } else {
        printf("Tanggal lahir tidak valid.\n");
    }

    return 0;
}
