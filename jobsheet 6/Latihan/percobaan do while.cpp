/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main (){
	char ulangi = 'y';
	int counter = 0;
	
	do{
		printf("Apakah kamu mau mengulang?\n");
		printf("jawab (y/t): ");
		scanf("%c", &ulangi);
		
		//increment counter
		counter++;
	}while(ulangi == 'y');
	
	printf("\n\n--------------\n");
	printf("Perulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
	
	return 0;
}
