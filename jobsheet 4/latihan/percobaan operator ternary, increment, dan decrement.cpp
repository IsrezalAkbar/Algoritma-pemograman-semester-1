/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main() {
    int a = 4;
    
    //operator ternary
    printf("a > 1 adalah %s \n", a > 1 ? "benar": "salah");
    
    //increment a
    a++;
    printf("a++ = %d\n", a);
    
    ++a;
    printf("++a = %d\n", a);
    
    
    //decrement a
    a--;
    printf("a-- = %d\n", a);
    
    --a;
	printf("--a = %d\n", a);
    
    return 0;  
}
