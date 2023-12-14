/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>
#include <string.h>

void kataterbalik(char str[]) {
    int i, j;
    char temp;

    int length = strlen(str);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char kalimat[100];

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    kalimat[strcspn(kalimat, "\n")] = '\0';

    kataterbalik(kalimat);

    printf("Kebalikannya: %s\n", kalimat);

    return 0;
}
