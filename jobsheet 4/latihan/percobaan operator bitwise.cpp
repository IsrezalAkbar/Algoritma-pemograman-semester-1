/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main(){
	int a = 6;
	int b = 3;

	//bitwise AND
	printf("a & b = %d\n", a & b);

	//bitwise OR
	printf("a | b = %d\n", a | b);
	
	//bitwise XOR
	printf("a & b = %d\n", a ^ b);
	
	//bitwise NOT
	printf("~a = %d\n", ~a);
	
	//bitwise Left Shift
	printf("a << 1 = %d\n", a << 1);
	
	//bitwise Right Shift
	printf("a >> 1 = %d\n", a >> 1);
	
	return 0;
}