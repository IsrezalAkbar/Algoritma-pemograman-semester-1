/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    double celsius, kelvin, fahrenheit, reamur;

    // Input suhu dalam Celsius dari keyboard
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%lf", &celsius);

    // Konversi suhu ke Kelvin, Fahrenheit, dan Reamur
    kelvin = celsius + 273.15;
    fahrenheit = (celsius * 1.8) + 32;
    reamur = celsius * 0.8;

    // Menampilkan hasil konversi suhu
    printf("Suhu dalam Kelvin: %.2lf\n", kelvin);
    printf("Suhu dalam Fahrenheit: %.2lf\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2lf\n", reamur);

    return 0;
}