#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int lc,card, pin, count;
	count=0;
	card=123;
	pin=456;
	
	do{
		printf("\nnhap card\n");
	scanf("%d",&card);
	printf("\nnhap pin\n");
	scanf("%d",&pin);
	count++;
	printf("lan %d , xin chao %d\n",count, card);
		
		if ((card==123)&&(pin==456)){
			printf("moi ban chon tu 1-4\n");
			printf("1. rut tien\n");
			printf("2. xem so du\n");
			printf("3. chuyen khoan\n");
			printf("4. thoat\n");
				
			do{
				printf("moi nhap lua chon:\n");
			scanf("%d",&lc);	
				
				switch(lc){
			case 1: 
			printf("\n nhap so tien muon rut\n");
			break;
			case 2: 
			printf("\n so du cua ban la\n");
			break;
			case 3: 
			printf("\n nhap nguoi nhan\n");
			break;
			case 4: 
			printf("\n xin cam on\n");
			break;
				}
			}while (lc<5);	
		printf("moi nhap lai\n");	
		}
	else {
		printf("card or pin sai");
	}
	}while (count<3);
	printf("\nban nhap sai qua so lan");	
}

