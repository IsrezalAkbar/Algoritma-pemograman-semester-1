/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main(){
	int n=5;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d\t", i*j);
		}
		printf("\n");
	}
	return 0;
}