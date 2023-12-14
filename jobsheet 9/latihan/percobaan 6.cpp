/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/


#include <stdio.h>

void add_score(int *score){
	*score = *score + 5;
	printf("score diubah ke %d\n",*score);
}

int main(){
	int score = 0;
	
	printf("score sebelum diubah: %d\n",score);
	add_score(&score);
	printf("score setelah diubah: %d\n",score);
	
	return 0;
}
