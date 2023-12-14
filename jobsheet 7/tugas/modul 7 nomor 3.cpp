/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>
#include <string.h>

int main() {
    char validUsername[] = "pengguna";
    char validPassword[] = "rahasia";

    char inputUsername[50];
    char inputPassword[50];

    printf("Masukkan username: ");
    scanf("%s", inputUsername);

    printf("Masukkan password: ");
    scanf("%s", inputPassword);

    if (strcmp(inputUsername, validUsername) == 0 && strcmp(inputPassword, validPassword) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}
