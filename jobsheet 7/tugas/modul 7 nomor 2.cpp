/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main(){
	int jumlahmahasiswa;
	
	printf("masukkan jumlah mahasiswa:");
	scanf("%d", &jumlahmahasiswa);
	
	char namamahasiswa[100][100];
	
	for (int i = 0; i < jumlahmahasiswa; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        scanf("%s", namamahasiswa[i]);
    }
    
    printf("Nama-nama mahasiswa:\n");
    for (int i = 0; i < jumlahmahasiswa; i++) {
        printf("Mahasiswa ke-%d: %s\n", i + 1, namamahasiswa[i]);
    }
    
    return 0;
}