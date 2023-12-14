/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    char ope;
    double angka1, angka2;

    printf("Masukkan operator (+, -, *, /): ");
    scanf("%c", &ope);

    printf("Masukkan dua angka: ");
    scanf("%lf %lf", &angka1, &angka2);

    switch(ope) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", angka1, angka2, angka1 + angka2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", angka1, angka2, angka1 - angka2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", angka1, angka2, angka1 * angka2);
            break;
        case '/':
            if(angka2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", angka1, angka2, angka1 / angka2);
            else
                printf("Pembagian dengan nol tidak diizinkan.\n");
            break;
        default:
            printf("Operator yang dimasukkan tidak valid.\n");
    }

    return 0;
}
