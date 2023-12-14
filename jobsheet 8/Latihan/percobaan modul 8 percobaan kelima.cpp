/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

float bagi(int a, int b){
	float hasil = (float)a / (float)b;
	return hasil;
}

int main(){
	printf("hasil 5/2: %.2f\n", bagi(5,2));
}