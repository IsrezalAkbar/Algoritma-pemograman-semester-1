/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main(){
	int nilaimahasiswa[20];
	int totalnilai = 0;
	
	for(int i = 0; i<20; i++){
	printf("masukkan nilai mahasiswa ke %d:", i+1);
	scanf("%d", &nilaimahasiswa[i]);
	totalnilai +=nilaimahasiswa[i];
}
	int rata_rata = totalnilai / 20;
	printf("nilai rata rata mahasiswa adalah:%d", rata_rata);
	
	return 0;
}