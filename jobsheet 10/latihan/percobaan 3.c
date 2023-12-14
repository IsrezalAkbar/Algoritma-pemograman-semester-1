/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main(){
	enum hari sekarang;
	sekarang = RABU;
	
	printf("Ukuran variabel enum: %d bytes\n", sizeof(sekarang));
}
