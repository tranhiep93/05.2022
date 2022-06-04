#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num;	
	printf("nhap so n: \n");
	scanf("%d",&num);
	
	printf("Ket qua la:\n");
	if(num<0){
		printf("%d la so nguyen am",num);
		}
	if(num==0){
		printf("%d bang khong",num);
		}
	if(num>0){
		printf("%d la so nguyen duong",num);
		}
	return 0;
}
