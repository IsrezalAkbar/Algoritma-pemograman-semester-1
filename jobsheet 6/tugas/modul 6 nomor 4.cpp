/*
dibuat oleh:Isrezal Akbar
NIM:23343041
sesi:202313430011
*/

#include <stdio.h>

int main(){
	int pilihan,uang;
	int saldo = 175000;
	
	printf("Menu ATM\n");
	printf("1.cek saldo:\n");
	printf("2.setoran:\n");
	printf("3.penarikan tunai:\n");
	printf("4.exit:\n");
	
	while(pilihan!=4){
		printf("masukkan pilihan menu:");
		scanf("%d", &pilihan);
		switch(pilihan){
			case 1:
				printf("no.rek:0123");
				printf("\nnama rek:hatori");
				printf("\nsaldo anda:%d\n", saldo);
				break;
				case 2:
					printf("masukkan uang yang ingin disetor:Rp");
					scanf("%d", &uang);
					saldo +=uang;
					printf("saldo anda sekarang:%d\n", saldo);
					break;
					case 3:
					printf("Masukkan uang yang ingin ditarik: Rp");
                scanf("%d", &uang);
                if (saldo >= 50000 && uang <= saldo - 50000) {
                    saldo -= uang;
                    printf("Sisa saldo anda sekarang: %d\n", saldo);
                } else {
                    printf("Maaf, penarikan anda tidak bisa dilakukan. Saldo anda harus bersisa Rp. 50000\n");
                }
                break;
                case 4:
                	printf("terima kasih");
                	break;
                	
                	default:
                		printf("pilihan tidak tersedia");
	}
 }
 return 0;
}
