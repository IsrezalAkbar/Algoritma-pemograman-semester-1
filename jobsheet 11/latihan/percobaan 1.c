/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

void main(){
	char buff[255];
	FILE *fptr;
	
	//membuka file
	if((fptr = fopen("puisi.txt", "r")) == NULL){
		printf("Error: File tidak ditemukan!");
		exit(1);
	}
	
	/*
	Membaca file perbaris
	
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	
	*/
	
	//membaca isi file keseluruhan dengan perulangan while
	while(fgets(buff, sizeof(buff), fptr)){
		printf("%s", buff);
	}
	
	//tutup file
	fclose(fptr);
}
