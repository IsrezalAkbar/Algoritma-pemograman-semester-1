/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

#define PHI 3.14159265359

int main() {
    double diameter = 12.0;
    double jari_jari = diameter / 2.0;

    double volume = (4.0 / 3.0) * PHI * jari_jari * jari_jari * jari_jari;

    double luas_permukaan = 4.0 * PHI * jari_jari * jari_jari;

    printf("Diameter bola: %.2f cm\n", diameter);
    printf("Jari-jari bola: %.2f cm\n", jari_jari);
    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", luas_permukaan);

    return 0;
}