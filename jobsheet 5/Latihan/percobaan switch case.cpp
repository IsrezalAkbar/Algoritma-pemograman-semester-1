/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char grade;
    printf("Inputkan grade: ");
    scanf(" %c", &grade);

    switch (toupper(grade)) {
        case 'A':
            printf("Luar biasa!\n");
            break;
        case 'B':
        case 'C':
            printf("Bagus!\n");
            break;
        case 'D':
            printf("Anda lulus\n");
            break;
        case 'E':
        case 'F':
            printf("Anda remidi\n");
            break;
        default:
            printf("Grade Salah!\n");
	}
	return 0;
}
