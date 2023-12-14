/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main(){
	int nama,nim,prodi,fakultas,nilai_pratikum,uts,uas,nilai_akhir;
	
	printf("nama: ");
	scanf("%[^\n]s", &nama);
	
	printf("nim: ");
	scanf("%i", &nim);
	
	printf("prodi: ");
	scanf("%s", &prodi);
	
	printf("fakultas: ");
	scanf("%s", &fakultas);
	
	printf("nilai_pratikum: ");
	scanf("%i" ,&nilai_pratikum);
	
	printf("nilai_uts: ");
	scanf("%i", &uts);
	
	printf("nilai_uas: ");
	scanf("%i", &uas);
	
	nilai_akhir = 30*nilai_pratikum/100 + 30*uts/100 + 40*uas/100;
	
	printf("nilai_akhir: %i", nilai_akhir);
	
	return 0;
}
