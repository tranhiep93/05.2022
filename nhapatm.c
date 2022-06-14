#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Card, Pin, lc;
	printf("Nhap vao ID card:\n");
	scanf("%d",&Card);
	printf("Nhap vao Pin:\n");
	scanf("%d",&Pin);

	if (Pin==123 && Card==456){
		printf("Chao mung %d: \n",Card);
		printf("1. Rut tien\n");
		printf("2. Chuyen khoan\n");
		printf("3. Xem so du\n");
		printf("4. Thoat\n");
		printf("Moi ban nhap lua chon:\n");
		scanf("%d",&lc);
		
		if (lc==1){
			printf("nhap so tien can rut\n");
		}
		if(lc==2){
			printf("nhap nguoi nhan\n");
		}
		if(lc==3){
			printf("so du cua ban la\n");
		}
		if(lc==4){
			printf("xin cam on\n");
		}
		else {
		printf("Moi nhap lai lua chon:\n");
		scanf("%d",&lc);
		}	
	}
	else{
		printf("Card va Pin khong dung");
	}
	return 0;
}
