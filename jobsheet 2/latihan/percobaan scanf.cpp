/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>
int main(){
	char name[20], web_address[30];
	
	printf("Nama: ");
	scanf("%s", &name);
	
	printf("Alamat web: ");
	scanf("%s", &web_address);
	
	printf("\n---------------------\n");
	printf("Nama yang diinputkan: %s\n", name);
	printf("Alamat Web yang diiinputkan: %s\n", web_address);
	
	return 0;
}
