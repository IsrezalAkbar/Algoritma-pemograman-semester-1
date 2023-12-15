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

char* menentukanzodiak(struct tanggal tanggallahir) {
    if ((tanggallahir.bulan == 3 && tanggallahir.hari >= 21) || (tanggallahir.bulan == 4 && tanggallahir.hari <= 19)) {
        return "Aries";
    } else if ((tanggallahir.bulan == 4 && tanggallahir.hari >= 20) || (tanggallahir.bulan == 5 && tanggallahir.hari <= 20)) {
        return "Taurus";
    } else if ((tanggallahir.bulan == 5 && tanggallahir.hari >= 21) || (tanggallahir.bulan == 6 && tanggallahir.hari <= 20)) {
        return "Gemini";
    } else if ((tanggallahir.bulan == 6 && tanggallahir.hari >= 21) || (tanggallahir.bulan == 7 && tanggallahir.hari <= 22)) {
        return "Cancer";
    } else if ((tanggallahir.bulan == 7 && tanggallahir.hari >= 23) || (tanggallahir.bulan == 8 && tanggallahir.hari <= 22)) {
        return "Leo";
    } else if ((tanggallahir.bulan == 8 && tanggallahir.hari >= 23) || (tanggallahir.bulan == 9 && tanggallahir.hari <= 22)) {
        return "Virgo";
    } else if ((tanggallahir.bulan == 9 && tanggallahir.hari >= 23) || (tanggallahir.bulan == 10 && tanggallahir.hari <= 22)) {
        return "Libra";
    } else if ((tanggallahir.bulan == 10 && tanggallahir.hari >= 23) || (tanggallahir.bulan == 11 && tanggallahir.hari <= 21)) {
        return "Scorpio";
    } else if ((tanggallahir.bulan == 11 && tanggallahir.hari >= 22) || (tanggallahir.bulan == 12 && tanggallahir.hari <= 21)) {
        return "Sagittarius";
    } else if ((tanggallahir.bulan == 12 && tanggallahir.hari >= 22) || (tanggallahir.bulan == 1 && tanggallahir.hari <= 19)) {
        return "Capricorn";
    } else if ((tanggallahir.bulan == 1 && tanggallahir.hari >= 20) || (tanggallahir.bulan == 2 && tanggallahir.hari <= 18)) {
        return "Aquarius";
    } else {
        return "Pisces";
    }
}

int main() {
    struct tanggal tanggallahir;

    printf("Masukkan tanggal lahir (tgl bln thn): ");
    scanf("%d %d %d", &tanggallahir.hari, &tanggallahir.bulan, &tanggallahir.tahun);

    char* zodiak = menentukanzodiak(tanggallahir);
    printf("Zodiak Anda adalah: %s\n", zodiak);

    return 0;
}
