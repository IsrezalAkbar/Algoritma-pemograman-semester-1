/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main(){
	
	int jawaban;
	
	printf("Berapakah hasil 3+4?\n");
	printf("jawab> ");
	scanf("%d", &jawaban);
	
	printf("Jawaban anda: %s\n", (jawaban == 7)? "Benar" : "Salah");

	return 0 ;
}
