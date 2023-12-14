/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int perkalianRekursif(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    } else {
        return a + perkalianRekursif(a, b - 1);
    }
}

int main() {
    int bilangan1, bilangan2;
    printf("Masukkan dua bilangan bulat positif: ");
    scanf("%d %d", &bilangan1, &bilangan2);

    int hasilPerkalian = perkalianRekursif(bilangan1, bilangan2);

    printf("Hasil perkalian: %d x %d = %d\n", bilangan1, bilangan2, hasilPerkalian);

    return 0;
}
