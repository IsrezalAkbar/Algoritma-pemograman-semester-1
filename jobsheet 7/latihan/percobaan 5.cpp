/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/
	
	#include <stdio.h>
	
int main(){
	//membuat array 
	int nilai[5] = {33, 22, 11, 44, 21};
	
	//mengambil banyaknya isi array 
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai: %d\n", length);
}
