/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/


#include <stdio.h>

void printString(char *str) {
    while (*str != '\0') {
        printf("%c", *str);
        str++;
    }
    printf("\n");
}

int main() {
    char teks[] = "BORLAND";
    char *ptr = teks;

    while (*ptr != '\0') {
        printString(ptr);
        ptr++;
    }

    return 0;
}
